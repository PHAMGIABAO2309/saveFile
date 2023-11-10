#include<iostream>
using namespace std;
bool songuyento(int n)
{
	if( n <= 1)
		return false;
	for(int i=2; i*i <= n; i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int sapxepsonguyentotangdan(int a[],int n)
{
	for(int i=0; i<n; i++)
	{
		if(songuyento(a[i]))
		{
			for(int j=i+1; j<n; j++)
			{
				if(songuyento(a[i]))
				{
					if(a[i] > a[j])
					{
						int tam = a[i];
						a[i] = a[j];
						a[j]= tam;
					}
				}
			}
		}
	}
}
void Nhap(int a[],int &n)
{
	if( n <= 0 )
	cout<<"So phan tu khong hop le.Xin kiem tra lai!";
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
void Xuat(int a[],int &n)
{
	sapxepsonguyentotangdan(a,n);
	cout<<"So nguyen to sap xep tang dan: ";
	for(int i=0; i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	int a[n];
	Nhap(a,n);
	sapxepsonguyentotangdan(a,n);
	Xuat(a,n);
}
