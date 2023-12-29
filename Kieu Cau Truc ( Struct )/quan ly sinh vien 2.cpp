#include<iostream>
#include<iomanip>
using namespace std;
struct SINHVIEN
{
	string mssv;
	string hoten;
	double dtb;
};
//nhap thong tin cua n sinh vien tu ban phim
void nhapthongtin(SINHVIEN a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap thong tin cho sinh vien thu "<<i+1<<": ";
		cout<<"\nNhap ma so sinh vien: ";
		cin>>a[i].mssv;
		cout<<"Nhap ho va ten: ";
		cin.ignore();
		getline(cin,a[i].hoten);
		cout<<"Nhap Diem trung binh: ";
		cin>>a[i].dtb;
	}
}
//hien thi thong tin cua n sinh vien ra ban phim
void xuatthongtin(SINHVIEN a[], int n)
{
	cout<<setw(5)<<"Ma so sinh vien"<<setw(20)<<"Ho va Ten"<<setw(25)<<"Diem trung binh"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<setw(5)<<a[i].mssv<<setw(20)<<a[i].hoten<<setw(25)<<fixed<<setprecision(2)<<a[i].dtb<<endl;
	}
}
//tim sinh vien co diem trung binh cao nhat va in ra thong tin sinh vien do
void  svcodtbmax(SINHVIEN a[], int n)
{
	double max = a[0].dtb;
	int vitri = 0;
	for(int i=1; i<n;i++)
	{
		if(a[i].dtb > max)
		max = a[i].dtb;
		vitri = i;
	}
	cout<<"\n Sinh vien co diem trung binh cao nhat la: \n";
	cout<<"Ma So Sinh Vien: "<<a[vitri].mssv;
	cout<<"\nHo va Ten Sinh Vien: "<<a[vitri].hoten;
	cout<<"\n Diem Trung binh: "<<a[vitri].dtb;
}
//sap xep danh sach sinh vien theo dtb giam dan
void sapxep(SINHVIEN a[], int n)
{
	for(int i=0; i<n-1; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			if(a[i].dtb < a[j].dtb)
			{
				swap(a[i],a[j]);
			}
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong sinh vien: "; cin>>n;
	SINHVIEN a[n];
	nhapthongtin(a,n);
	cout<<"\n DANH SACH SINH VIEN VUA NHAP: \n";
	xuatthongtin(a,n);
	svcodtbmax(a,n);
	cout<<"\n danh sach sinh vien sau khi sap xep theo diem giam dan: \n";
	sapxep(a,n);
	xuatthongtin(a,n);
}