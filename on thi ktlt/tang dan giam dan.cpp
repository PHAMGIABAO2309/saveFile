#include<iostream>
using namespace std;
void Nhap(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"] : ";
		cin>>a[i];
	}
}
void Xuat(int a[], int n)
{
	for(int i=0; i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void tangdan(int a[], int n)
{
	for(int i=0; i<n-1;i++)
	{
		for(int j=0; j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				int tam = a[j];
				a[j] = a[j+1];
				a[j+1] = tam;
			}
		}
	}
	Xuat(a,n);
}
void giamdan(int a[], int n)
{
	for(int i=0; i<n-1;i++)
	{
		for(int j=0; j<n-1-i;j++)
		{
			if(a[j] < a[j+1])
			{
				int tam = a[j];
				a[j] = a[j+1];
				a[j+1] = tam;
			}
		}
	}
	Xuat(a,n);
}
int main()
{
	int a[100];
	int n;
	cout<<"Nhap n: "; cin>>n;
	Nhap(a,n);
	Xuat(a,n);
	cout<<"tang dan: ";
	tangdan(a,n);
	cout<<"giam dan: ";
	giamdan(a,n);
}