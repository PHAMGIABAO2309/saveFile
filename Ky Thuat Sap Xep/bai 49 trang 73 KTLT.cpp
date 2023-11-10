#include<iostream>
using namespace std;
void Nhap(int a[],int &n)
{
	if( n <= 0 )
	cout<<"So phan tu khong hop le.Xin kiem tra lai!";
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
void sapxepvitriletangdan(int a[], int n)
{
	for(int i=1; i<n; i+=2)
	{
		int vitrimin = i;
		for(int j=i+2; j<n;j+=2)
		{
			if(a[i]<a[vitrimin])
			{
				vitrimin =j;
			}
		}
		if(a[i]> a[vitrimin])
		{
			float tam = a[i];
			a[i] = a[vitrimin];
			a[vitrimin] = tam;
		}
	}
}
void Xuat(int a[],int &n)
{
	sapxepvitriletangdan(a,n);
	cout<<"Cac gia tri tai vi tri le trong mang tang dan: ";
	for(int i=0; i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	
	cout<<"Cac gia tri tai vi tri le trong mang tang dan: ";
	sapxepvitriletangdan(a,n);
	Xuat(a,n);
}