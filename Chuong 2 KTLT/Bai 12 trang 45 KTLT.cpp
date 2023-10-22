#include<iostream>
#include<cmath>
using namespace std;
const int MAX = 50;

void Nhap(int a[],int n)
{
	for(int i = 0; i<n;i++)
	{
		cout<<"Nhap phan tu thu"<<i+1<<": ";
		cin>>a[i];
	}
}

void TrungBinhCong(int a[],int n)
{
	int tongAm = 0;
	int tongDuong = 0;
	int demAm = 0;
	int demDuong = 0;
	for(int i = 0; i<n;i++)
	{
		if(a[i]<0)
		{
			tongAm =  tongAm + a[i];
			demAm++;
		}
		else
		{
			tongDuong = tongDuong + a[i];
			demDuong++;
		}
	}
	if(demAm > 0)
	{
		cout<<"\nTrung binh cong cac so am: "<<(float)tongAm/demAm;
	}
	else
	{
		cout<<"\n Khong co so am trong mang";
	}
	if ( demDuong > 0)
	{
		cout<<"\n Trung binh cong cac so duong: "<<(float)tongDuong/demDuong;
	}
	else
	{
		cout<"\n KHong co so duong trong mang";
	}	
}

void TrungBinhTich(int a[],int n)
{
	int tichchan = 1;
	int tichle = 1;
	int demchan = 0;
	int demle = 0;
	for(int i = 0; i<n;i++)
	{
		if(a[i]%2 == 0)
		{
			tichchan = tichchan * a[i];
			demchan++;
		}
		else
		{
			tichle = tichle * a[i];
			demle++;
		}
	}
	if(demchan >0)
	{
		cout<<"\nTrung binh tich cac so chan: "<<pow((float)tichchan,1.0/demchan);
	}
	else
	{
		cout<<"\nKhong co so chan trong mang";
	}
	if(demle >0)
	{
		cout<<"\n Trung binh tich cac so le: "<<pow((float)tichle,1.0/demle);
	}
	else
	{
		cout<<"\n Khong co so le trong mang";
	}
}

int main()
{
	int n,a[MAX];
	cout<<"Nhap so phan tu cua mang: ";
	cin>>n;
	Nhap(a,n);
	TrungBinhCong(a,n);
	TrungBinhTich(a,n);
}
