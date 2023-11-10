#include<iostream>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
}
int Tong(int a[], int n)
{
	int s = 0;
	for(int i = 0; i<n; i++)
	{
		s += a[i];
	}
	cout<<"Tong cac phan tu trong mang: "<<s;
}
int main()
{
	int n;
	int a[n];
	cout<<"Nhap phan tu so luong: "; cin>>n;	
	Nhap(a,n);
	Tong(a,n);
}