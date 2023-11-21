#include<iostream>
#include<cstring>
using namespace std;
struct NHANVIEN
{
	string manv;
	string hoten;
	int loai_sp;
	int so_luong_sp;
	int luong_nv;
};
void NhapNV(NHANVIEN &nv)
{
	cin.ignore();
	cout<<"\n Nhap Ma Nhan Vien: ";
	getline(cin,nv.manv);
	cout<<"Nhap Ho Ten: ";
	getline(cin,nv.hoten);
	do
	{
		cout<<"Nhap Loai San Pham ( 0:A 1:B 2:C ):  ";
		cin>>nv.loai_sp;
	} while ( !(nv.loai_sp >=0 && nv.loai_sp <=2));
	cout<<"Nhap so luong san pham: ";
	cin>>nv.so_luong_sp;
}

void NhapDSNV(NHANVIEN a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap thong tin sinh vien thu ["<<i+1<<"]: ";
		NhapNV(a[i]);
	}
}

void XuatNV(NHANVIEN &nv)
{
	cout<<"\n Ma Nhan Vien: "<<nv.manv;
	cout<<"\n Ho va Ten: "<<nv.hoten;
	cout<<"\n Loai San Pham: "<<nv.loai_sp;
	cout<<"\n So Luong San Pham: ";
	if(nv.loai_sp == 0)
	{
		cout<<"San pham loai A";
	}
	else if ( nv.loai_sp == 1)
	{
		cout<<"San pham loai B";
	}
	else 
	{
		cout<<"San pham loai C";
	}
	cout<<"\n Luong nhan vien: "<<nv.luong_nv;
}

void XuatDSNV(NHANVIEN a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\n \t";
		cout<<"\n =====================================";
		cout<<"\n Thong tin nhan vien thu ["<<i+1<<"]: ";
		XuatNV(a[i]);
	}
}

void Tinh_tien_luong(NHANVIEN a[], int n)
{
	int giatri;
	int B[3][3] = 
	{
		{ 32000, 30000, 28000  },
		{ 35000, 32000, 29000 },
		{ 38000, 35000, 30000 }
	};
	for(int i=0; i<n; i++)
	{
		if(a[i].so_luong_sp > 0 && a[i].so_luong_sp <=30)
			giatri = 0;
		if(a[i].so_luong_sp > 31 && a[i].so_luong_sp <=50)
			giatri = 1;
		if(a[i].so_luong_sp > 50 )
			giatri = 2;
		int heso;
		heso = B[giatri][a[i].loai_sp];
		a[i].luong_nv = heso * a[i].so_luong_sp;
	}
}
int main()
{
	NHANVIEN a[100];
	int n;
	cout<<"Nhap so luong nhan vien: "; cin>>n;
	NhapDSNV(a,n);
	Tinh_tien_luong(a,n);
	XuatDSNV(a,n);
}