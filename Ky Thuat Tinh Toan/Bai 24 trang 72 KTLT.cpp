#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float a[],int n)
{
	
	for(int i =0; i<n;i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
float tongcacgiatrilonhontrituyetdoidungliensau(float a[],int n)
{
	float s =0;
	for(int i = n-1; i>=0; i--)
	{
		if(a[i]>abs(a[i+1]))
		{
			s+=a[i];
		}
	}
	return s;
}
void Xuat(float a[],int n)
{
	float kq = tongcacgiatrilonhontrituyetdoidungliensau(a,n);
	cout<<"Tong cac gia tri lon hon tri tuyet doi  gia tri dung lien sau: "<<kq;
}
int main()
{
	int n;
	float a[n];
	cout<<"Nhap so luong phan tu: "; cin>>n;
	Nhap(a,n);
	tongcacgiatrilonhontrituyetdoidungliensau(a,n);
	Xuat(a,n);
}