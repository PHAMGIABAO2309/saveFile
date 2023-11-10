#include<iostream>
#define MAX 30
using namespace std;
void Nhap(int a[MAX],int n)
{
	for(int i = 0; i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>a[i];
	}
}
void xoaphantu(int a[MAX],int &n,int k)
{
	for(int i = k;i < n - 1;i++)
	{
		a[i] = a[i+1];
	}
	n--;
}
bool Nguyento(int n)
{
	int kq = 0, dem = 0;
	if(n <2) kq = 0;
	else
	{
		for(int i = 2; i<n; i++)
		{
			if(n%i == 0)
				dem++;
		}
		if(dem == 0) kq = 1;
		else kq = 0;
	}
	return kq;
}
void xoasonguyento(int a[MAX],int n)
{
	for(int i = 0; i<n; i++)
	{
		if(Nguyento(a[i]))
		{
			xoaphantu(a,n,i);
			i--;
		}
	}
}
void Xuat(int a[MAX],int n)
{
	for(int i = 0 ; i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	int a[MAX];
	cout<<"Nhap so luong phan tu: "; cin>>n;
	Nhap(a,n);
	Xuat(a,n);
	cout<<"\nSo nguyen to can xoa la: ";
	xoasonguyento(a,n);
	Xuat(a,n);
}

