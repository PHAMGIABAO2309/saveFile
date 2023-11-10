#include<iostream>
using namespace std;
void Nhap(float a[],int n)
{
	
	for(int i =0; i<n;i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
float demsolanxuathien_X(float a[],int n, float x)
{
	float count = 0;
	for(int i =0; i<n;i++)
	{
		if(a[i] == x)
		{
			cout<<a[i]<<" ";
			count++;
		}
	}
	cout<<"So Lan Xuat Hien Gia Tri X: "<<count;
}
int main()
{
	int n;
	float x;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	float a[n];
	Nhap(a,n);
	cout<<"Nhap x: "; cin>>x;
	demsolanxuathien_X(a,n,x);
}