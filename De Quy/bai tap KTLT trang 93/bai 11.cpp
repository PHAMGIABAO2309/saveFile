#include<iostream>
using namespace std;
int tongphantuchan(int a[], int n, int i = 0, int s =0)
{
	if( i >= n)
		return s;
	if ( a[i] % 2 == 0)
		s += a[i];
	return tongphantuchan(a,n,i + 1, s);
}
void Nhap(int a[], int n,  int i=0)
{
	if ( i == n)
		return;
	cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
	cin>>a[i];
	Nhap(a,n, i+1);
	
}
void Xuat(int a[], int n, int i=0)
{
	if ( i == n)
		return;
	cout<<a[i]<< " ";
	Xuat(a, n, i+1);
}
void Xuatphantuchan(int a[], int n, int i=0)
{
	if ( i == n)
		return;
	if ( a[i] % 2 == 0)
		cout<<a[i]<<" ";
	Xuatphantuchan(a,n,i+1);
}
int main()
{
	int n;
	int a[n];
	cout<<"Nhap so luong phan tu: "; cin>>n;
	Nhap(a,n);
	cout<<"\n Mang vua nhap la: ";
	Xuat(a,n);
	cout<<"\n Cac phan tu chan trong mang la: ";
	Xuatphantuchan(a,n);
	int kq = tongphantuchan(a,n);
	cout<<"\n Tong phan tu chan trong mang la: "<<kq;
}
