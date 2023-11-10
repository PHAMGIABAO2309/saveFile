#include<iostream>
using namespace std;
float tonggiatrilonhongiatridunglientruocno(float a[],int n)
{
	float s=0;
	for(int i=1; i<n; i++)
	{
		if(a[i]>a[i-1])
		{
			s+=a[i];
		}
	}
	return s;
}
void Nhap(float a[],int n)
{
	
	for(int i =0; i<n;i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
void Xuat(float a[],int n)
{
	float kq = tonggiatrilonhongiatridunglientruocno(a,n);
	cout<<"Tong cac gia tri lon hon gia tri dung lien truoc: "<<kq;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	float a[n];
	Nhap(a,n);
	tonggiatrilonhongiatridunglientruocno(a,n);
	Xuat(a,n);
	
}