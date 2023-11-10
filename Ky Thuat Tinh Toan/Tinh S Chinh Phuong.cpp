#include<iostream>
#include<cmath>
using namespace std;
bool sochinhphuong(int &n)
{
	int can = sqrt(n);
	return can*can == n;
}
int tongsochinhphuong(int a[],int n)
{
	int s=0;
	for(int i =0; i<n; i++)
	{
		if(sochinhphuong(a[i]))
		{
			s +=a[i];
		}
	}
	return s;
}
void Nhap(int a[],int n)
{
	for(int i =0; i<n;i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	int a[n];
	Nhap(a,n);
	int s = tongsochinhphuong(a,n);
	cout<<"Tong so chinh phuong: "<<s;
}