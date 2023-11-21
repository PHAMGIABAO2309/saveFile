#include<iostream>
#include<cstring>
using namespace std;
struct SINHVIEN
{
	string masv;
	string ten;
	long long namsinh;
	float toan,ly,hoa;
	float dtb;
};
//--cau a
void Nhap(SINHVIEN &sv)
{
	cin.ignore();
	cout<<"\n Nhap ma so sinh vien: ";
	getline(cin,sv.masv);
	cout<<"Nhap ten: ";
	getline(cin,sv.ten);
	cout<<"Nhap nam sinh: ";
	cin>>sv.namsinh;
	do
	{
		cout<<"Nhap diem Toan: ";
		cin>>sv.toan;
	} while ( !(sv.toan >=0 && sv.toan <= 10));
	do
	{
		cout<<"Nhap diem Ly: ";
		cin>>sv.ly;
	} while ( !( sv.ly >=0 && sv.ly <= 10) );
	do
	{
		cout<<"Nhap diem Hoa: ";
		cin>>sv.hoa;
	} while ( !(sv.hoa >= 0 && sv.hoa <= 10) );
}
void NhapDSSV(SINHVIEN a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap thong tin sinh vien thu ["<<i+1<<"]: ";
		Nhap(a[i]);
	}
}
//--cau b
void Xuat(SINHVIEN &sv)
{
	cout<<"\nMa sinh vien: "<<sv.masv;
	cout<<"\nTen sinh vien: "<<sv.ten;
	cout<<"\nNam sinh sinh vien: "<<sv.namsinh;
	sv.dtb = (sv.toan + sv.ly + sv.hoa)/3.0;
	cout<<"\nDiem trung binh la: "<<sv.dtb;
	
}
void XuatDSSV(SINHVIEN a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\n";
		cout<<"\n=====================================";
		cout<<"\nThong tin sinh vien thu ["<<i+1<<"]: ";
		Xuat(a[i]);
	}
}
//--cau c
void svcodtbmax(SINHVIEN a[], int n)
{
	cout<<"\n";
	int vitridtb = 0;
	float maxdtb = a[0].dtb;
	for(int i=1; i<n; i++)
	{
		if(a[i].dtb > maxdtb)
		{
			maxdtb = a[i].dtb;
			vitridtb = i;
		}
	}
	cout<<"\nSinh vien co diem trung binh cao nhat: ";
	Xuat(a[vitridtb]);
}
//--cau d
void svcodtblonhon5vatuoimin(SINHVIEN a[],int n)
{
	cout<<"\n";
	long long tuoimin = a[0].namsinh;
	for(int i=1; i<n; i++)
	{
		int tuoi = a[i].namsinh;
		if(a[i].dtb > 5 && tuoi < tuoimin)
		{
			tuoimin = tuoi;
		}
		cout<<"\nSinh vien co dtb > 5 & nho tuoi nhat: ";
		Xuat(a[i]);
	}
}
//--cau e
void sxdsloptangdandtb(SINHVIEN a[],int n)
{
	cout<<"\n";
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j].dtb > a[j+1].dtb)
			{
				SINHVIEN tam = a[j];
				a[j] = a[j+1];
				a[j+1] = tam;
			}
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong sinh vien: "; cin>>n;
	SINHVIEN a[n];
	NhapDSSV(a,n);
	XuatDSSV(a,n);
	svcodtbmax(a,n);
	svcodtblonhon5vatuoimin(a,n);
	sxdsloptangdandtb(a,n);
	cout<<"\nDanh sach lop theo thu tu tang dan: ";
	XuatDSSV(a,n);
}