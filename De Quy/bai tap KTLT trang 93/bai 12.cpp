#include<iostream>
#include<cmath>
using namespace std;
bool ktnguyento(int n)
{
	if ( n <= 1)
		return false;
	for(int i=2; i<= sqrt(n); i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}
int tongnguyento(int a[], int n, int i=0)
{
	if( i ==n)
		return 0;
	if ( ktnguyento(a[i]))
		return a[i] + tongnguyento(a,n,i+1);
	return tongnguyento(a,n,i+1);
}
void Nhap(int a[], int n, int i=0)
{
	if ( i == n )
		return;
	cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
	cin>>a[i];
	Nhap(a,n,i+1);
}
void Xuat(int a[], int n, int i=0)
{
	if ( i==n)
		return;
	cout<<a[i]<< " ";
	Xuat(a,n,i+1);
}
void XuatSonguyento(int a[], int n, int i=0)
{
	if ( i==n )
		return;
	if (ktnguyento(a[i]))
		cout<<a[i]<<" ";
	XuatSonguyento(a,n,i+1);
}
int main()
{
	int n;
	int a[n];
	cout<<"\nNhap so luong phan tu: "; cin>>n;
	Nhap(a,n);
	cout<<"\nMang vua nhap la: ";
	Xuat(a,n);
	cout<<"\nCac so nguyen to co trong mang la: ";
	XuatSonguyento(a,n);
	int kq = tongnguyento(a,n);
	cout<<"\nTong cua so nguyen to co trong mang: "<<kq;
	
}