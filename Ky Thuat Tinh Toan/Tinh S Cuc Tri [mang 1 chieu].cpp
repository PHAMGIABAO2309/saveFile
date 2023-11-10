#include<iostream>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i =0; i<n;i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
int tongcuctri(int a[],int n)
{
	int s=0;
	for(int i=n-1; i>=0;i--)
	{
		if((a[i]>a[i-1] && a[i] > a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1]))
		{
			s+=a[i];
		}
	}
	return s;
}
 main()
{
	int n;
	int a[n];
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	Nhap(a,n);
	tongcuctri(a,n);
	int s = tongcuctri(a,n);
	cout<<"Tong cuc tri: "<<s;
	//Xuat(a,n);
}