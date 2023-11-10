#include<iostream>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
int kenhaumaca2deuchan(int a[],int n)
{
	int count=0;
	for(int i=0; i<n-1; i++)
	{
		if(a[i]%2==0 && a[i+1]%2==0)
		{
			count++;
		}
	}
	cout<<"So luong phan tu ke nhau ma ca 2 deu chan: "<<count;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	kenhaumaca2deuchan(a,n);
}