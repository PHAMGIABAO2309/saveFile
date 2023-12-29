#include<iostream>
using namespace std;
struct THISINH
{
	string Sobaodanh;
	string Hoten;
	int Ma_nganh;
	int Khu_vuc;
	int Doi_tuong;
	float Diem_toan, Diem_ly, Diem_hoa;
	float Tong_diem;
	int Ket_qua;
};
void nhapthongtin(THISINH a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap thong tin thi sinh thu ["<<i+1<<"]: ";
		cin.ignore();
		cout<<"\n Nhap so bao danh: "; getline(cin,a[i].Sobaodanh);
		cout<<"Nhap Ho va Ten: "; getline(cin,a[i].Hoten);
		do
		{
			cout<<"\n Nhap Ma Nganh ( 1: Toan, 2: Ly, 3: Hoa ): ";
			cin>>a[i].Ma_nganh;
		} while ( !(a[i].Ma_nganh >= 1 && a[i].Ma_nganh <= 3 ) );
		do
		{
			cout<<"\n Nhap Khu Vuc ( 1: khu vuc 1, 2: khu vuc 2, 3: khu vuc 3 ): ";
			cin>>a[i].Khu_vuc;
		} while ( !(a[i].Khu_vuc >= 1 && a[i].Khu_vuc <= 3 ) );
		do
		{
			cout<<"\n Nhap Doi Tuong ( 1: nhom 1, 2: nhom 2, 3: nhom 3 ): ";
			cin>>a[i].Doi_tuong;
		} while ( !(a[i].Doi_tuong >=1 && a[i].Doi_tuong <= 3 ) );
		do
		{
			cout<<"\n Nhap diem Toan: ";
			cin>>a[i].Diem_toan;
		} while ( !(a[i].Diem_toan >= 0 && a[i].Diem_toan <= 10 ) );
		do
		{
			cout<<"\n Nhap diem Ly: ";
			cin>>a[i].Diem_ly;
		} while ( !(a[i].Diem_ly >= 0 && a[i].Diem_ly <= 10 ) );
		do
		{
			cout<<"\n Nhap diem Hoa: ";
			cin>>a[i].Diem_hoa;
		} while ( !(a[i].Diem_hoa >= 0 && a[i].Diem_hoa <= 10 ) );
	}
}
float Tong_diem(THISINH a[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(a[i].Ma_nganh == 1 )
			a[i].Tong_diem = a[i].Diem_toan * 2 + a[i].Diem_ly + a[i].Diem_hoa;
		if(a[i].Ma_nganh == 2 )
			a[i].Tong_diem = a[i].Diem_toan + a[i].Diem_ly * 2 + a[i].Diem_hoa;
		if(a[i].Ma_nganh == 3 )
			a[i].Tong_diem = a[i].Diem_toan + a[i].Diem_ly + a[i].Diem_hoa * 2;
	}
}
int Ket_qua(THISINH a[], int n)
{
	float giatri;
	float B[3][3] =
	{
		{ 22.0, 23.0, 24.0 },
		{ 22.5, 23.5, 24.5 },
		{ 23.0, 24.0, 25.0 }
	};
	for(int i=0; i<n; i++)
	{
		int vitrimanganh = a[i].Ma_nganh -1;
		if(a[i].Tong_diem >= B[vitrimanganh][0])
			a[i].Ket_qua = 1;
		else
			a[i].Ket_qua = 0;
	}
}
void xuatthongtin(THISINH a[], int n)
{
	cout<<"\n \n";
	for(int i=0; i<n; i++)
	{
		cout<<"\nSo bao danh: "<<a[i].Sobaodanh;
		cout<<"\n Ho Ten: "<<a[i].Hoten;
		cout<<"\n Ma nganh: ";
		if ( a[i].Ma_nganh == 1 )
			cout<<"Toan";
		if ( a[i].Ma_nganh == 2 )
			cout<<"Ly";
		if ( a[i].Ma_nganh == 3 )
			cout<<"Hoa";
		cout<<"\n Khu vuc: ";
		if ( a[i].Khu_vuc == 1 )
			cout<<"khu vuc 1";
		if ( a[i].Khu_vuc == 2 )
			cout<<"khu vuc 2";
		if ( a[i].Khu_vuc == 3 )
			cout<<"khu vuc 3";
		cout<<"\n Doi tuong: ";
		if ( a[i].Doi_tuong == 1 )
			cout<<"Nhom 1 ";
		if ( a[i].Doi_tuong == 2 )
			cout<<"Nhom 2 ";
		if ( a[i].Doi_tuong == 3 )
			cout<<"Nhom 3 ";
		cout<<"\n Tong Diem: "<<a[i].Tong_diem;
		cout<<"\n Ket qua: "<<( a[i].Ket_qua ? "Dau" : "Rot");
	}
}
int main()
{
	int n;
	do
	{
		cout<<"Nhap so luong thi sinh: "; cin>>n;
	} while ( !(n > 0 && n<= 50 ) );
	THISINH a[n];
	nhapthongtin(a,n);
	Tong_diem(a,n);
	Ket_qua(a,n);
	xuatthongtin(a,n);
}