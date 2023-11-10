#include<iostream>
using namespace std;
void Nhap(float a[],int &n)
{
	if( n <= 0 )
	cout<<"So phan tu khong hop le.Xin kiem tra lai!";
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
float sapxepgiamdan(float a[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n;j++)
		{
			if(a[i]<a[j])
			{
				float tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}
void Xuat(float a[],int &n)
{
	sapxepgiamdan(a,n);
	cout<<"Mang sau khi sap xep giam dan: ";
	for(int i=0; i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	float a[n];
	Nhap(a,n);
	sapxepgiamdan(a,n);
	Xuat(a,n);
}