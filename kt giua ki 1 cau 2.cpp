#include<iostream>
using namespace std;

struct LuanVan
{
	string maluanvan;
	string tenluanvan;
	string hotensinhvien;
	string hotengiaovien;
	int namthuchien;
};
//a
void nhapthongtin(LuanVan a[], int &n)
{
	do
	{
		cout<<"Nhap so luong luan van: "; cin>>n;
	} while ( !( n>0 && n <= 30 ) );
	cin.ignore();
	for(int i=0; i<n; i++)
	{ 
		cout<<"Nhap luan van thu ["<<i+1<<"]: ";
		cout<<"\nNhap ma luan van: ";
		getline(cin,a[i].maluanvan);
		cout<<"Nhap ten luan van: ";
		getline(cin,a[i].tenluanvan);
		cout<<"Nhap ho ten sinh vien: ";
		getline(cin,a[i].hotensinhvien);
		cout<<"Nhap ho ten giao vien: ";
		getline(cin,a[i].hotengiaovien);
		do
		{
			cout<<"Nhap nam thuc hien:  ";
			cin>>a[i].namthuchien;
		} while ( !(a[i].namthuchien >= 2018 ) );
		cin.ignore();
	}
}
//b
void lietkeluanvangannhat(LuanVan a[], int &n)
{
	
	int namhientai = 2023; //gia su cho nam hien tai la 2023
	cout<<"\n Cac thong tin Luan Van thuc hien gan nhat: \n";
	for(int i=0; i<n;++i)
	{
		if(a[i].namthuchien == namhientai)
		{
			cout<<"Ma Luan Van: "<<a[i].maluanvan;
			cout<<"\nTen Luan Van: "<<a[i].tenluanvan;
			cout<<"\nHo ten sinh vien: "<<a[i].hotensinhvien;
			cout<<"\nHo ten giao vien: "<<a[i].hotengiaovien;
			cout<<"\nNam thuc hien: "<<a[i].namthuchien;
		}
		else
		{
			cout<<"\n Khong co luan van gan nhat !";
		}
	}
}
//c
void soluongluanvantheonam(LuanVan a[], int n)
{
	int namhientai = 2023;
	cout<<"\n So luong luan van theo tung nam: \n";
	for(int nam= 2018; nam <= namhientai; ++nam)
	{
		int dem = 0;
		for(int i=0; i<n; ++i)
		{
			if(a[i].namthuchien == nam)
			{
				dem++;
			}
		}
		if ( dem > 0 )
		{
			cout<<"Nam "<<nam<<" co: "<<dem<<" luan van.\n";	
		}
	}
}
int main()
{
	int n;
	LuanVan a[30];
	nhapthongtin(a,n);
	lietkeluanvangannhat(a,n);
	soluongluanvantheonam(a,n);
}