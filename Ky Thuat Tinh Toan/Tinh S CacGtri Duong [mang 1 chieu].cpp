#include<iostream>
using namespace std;
void Nhap(float a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
}
float TongCacGtriDuong(float a[],int n)
{
	float s = 0;
	for(int i = 0; i<n; i++)
	{
		if(a[i] > 0)
		{
			s += a[i];
		}
	}
	cout<<"Tong Cac Gtri Duong trong mang: "<<s;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	float a[n];
	Nhap(a,n);
	TongCacGtriDuong(a,n);
}