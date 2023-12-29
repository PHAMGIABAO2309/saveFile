#include<iostream>
using namespace std;
void xoaphantulonnhat(int a[], int &n)
{
	int max = 0;
	for(int i=1; i<n; i++)
	{
		if( a[i] > a[max])
		{
			max = i;
		}
	}
	for(int i=max; i<n-1; ++i)
	{
		a[i] = a[i+1];
	}
	--n;
}
void Nhap(int a[], int &n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu: "; cin>>n;
	int a[n];
	Nhap(a,n);
	xoaphantulonnhat(a,n);
	cout<<"\n Mang sau khi xao phan tu lon nhat: \n";
	for(int i=0; i<n; i++)
	{
		cout<<" a["<<i+1<<"]: "<<a[i]<<"\n";
	}
}