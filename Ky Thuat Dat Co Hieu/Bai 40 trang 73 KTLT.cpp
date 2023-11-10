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
int ktsonguyen(int a[],int n)
{
	int flag = 0;
	for(int i =0; i<n; i++)
	{
		if(a[i]==0)
		{
			flag = 1; //neu tim thay gia tri 0,dat co hieu thanh 1
			break;
		}
	}
	cout<<flag;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	ktsonguyen(a,n);
}