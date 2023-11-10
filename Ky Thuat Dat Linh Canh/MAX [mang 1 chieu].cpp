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
float giatrilonnhat(float a[],int n)
{
	float max = -1;
	for(int i =0; i<n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	cout<<"Gia tri lon nhat trong mang: "<<max;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	float a[n];
	Nhap(a,n);
	giatrilonnhat(a,n);
}