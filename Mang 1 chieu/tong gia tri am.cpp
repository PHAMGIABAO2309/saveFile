#include<iostream>
using namespace std;

float soam(float a[100],float n)
{
	float s= 0;
	for(int i = 0 ; i < n; i++)
	{
		if(a[i]<0)
			s += a[i];
	}
	return s;
}
int main()
{
	float n;
	cout<<"Nhap so luong:  "; cin>>n;
	float a[100];
	for(int i = 0 ; i < n;i++)
	{
		cout<<"[ "<<i<<" ]: ";
		cin>>a[i];
	}
	float s = soam(a,n);
	cout<<"Tong cac gia tri am: "<<s;
}
