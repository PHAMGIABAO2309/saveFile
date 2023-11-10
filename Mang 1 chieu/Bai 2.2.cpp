#include<iostream>
using namespace std;
bool SNT(int n)
{
	if(n <= 1)
		return false;
	for(int i = 2 ; i*i <= n ; i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu : "; cin>>n;
	int a[100];
	for(int i = 0 ; i < n ; i ++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>a[i];
	}
	for(int i = 0 ; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	
//================CAU A===================
//kiem tra mang co duoc sap xep theo thu tu hay khong
bool sapxep = true;
for(int i = 0 ; i < n-1;i++)
{
	if(a[i]>a[i+1])
	{
		sapxep = false;
		break;
	}
}
//in ra ket qua
if(sapxep)
	cout<<"\nMang duoc sap xep theo thu tu";
else
	cout<<"\nMang khong duoc sap xep theo thu tu";

//===================CAU B=================

int min = INT_MAX;
int minIndex = -1;
for(int i = 0 ; i < n; i ++)
{
	if(SNT(a[i]))
	{
		if(a[i]<min)
		{
			min = a[i];
			minIndex = i;
		}
	}
}
if(minIndex != -1)
{
	cout<<"\nVi tri phan tu la so nguyen to nho nhat: "<<minIndex;
}
else
	cout<<"Khong co so nguyen to nao trong mang la nho nhat";
//=============CAU C==================
int count = 0;
	for(int i = 0 ; i < n;  i++)
	{
		if(SNT(a[i]))
		{
			count++;
			cout<<"\nVi tri so nguyen to thu "<<count<<" la: "<<i<<endl;
		}
	}
}
