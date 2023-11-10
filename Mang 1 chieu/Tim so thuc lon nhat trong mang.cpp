#include<iostream>

using namespace std;

void Nhap(float a[100],float &n)
{
	for(int i = 0 ; i < n; i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>a[i];
	}
}

float giatrilonnhat(float a[100],float n)
{
	float lonnhat= a[0];
	for(int i = 0 ; i < n ;i++)
	{
		if(a[i]>lonnhat)
			lonnhat = a[i];
	}
	return lonnhat;
	
}
void Xuat(float a[100],float n)
{
	for(int i = 0  ; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	float n;
	float a[100];
	cout<<"Nhap so luong phan tu: "; cin>>n;
	Nhap(a,n);
	//Xuat(a,n);
	float lonnhat = giatrilonnhat(a,n);
	cout<<"Phan tu lon nhat trong mang la: "<<lonnhat;
}
