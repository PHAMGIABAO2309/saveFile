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
void demsoluongsochan(int a[],int n)
{
	int count=0;
	for(int i=0; i<n; i++)
	{
		if(a[i] % 2 == 0)
		{
			cout<<a[i]<<" ";
			count++;
		}
	}
	cout<<"So luong so chan la: "<<count;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	demsoluongsochan(a,n);
}