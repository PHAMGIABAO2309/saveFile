#include<iostream>
using namespace std;

void Nhap(int a[100], int n)
{
	for(int i = 0 ; i < n; i++)
	{
		cout<<"[ "<<i<<" ]= ";
		cin>>a[i];
	}
}

void Xuat(int a[100],int n)
{
	for(int i = 0 ; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
}

//Dich Mang Sang Phai
void DichPhai(int a[100],int n)
{
	for(int i = n - 1; i > 0;i--)
	{
		int tam = a[i];
		a[i] = a[i-1];
		a[i-1] = tam;
	} 
}

//xoa phan tu tai vi tri trong mang
void XoaPhanTu(int a[100], int &n)
{
	int xoa;
	cout<<"Nhap phan tu xoa tai vi tri: "; cin>>xoa;
	for(int i = xoa ; i < n ; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu: "; cin>>n;
	int a[100];
	Nhap(a,n);
	Xuat(a,n);
	cout<<"\n";
	//DichPhai(a,n);
	XoaPhanTu(a,n);
	Xuat(a,n);
	
}
