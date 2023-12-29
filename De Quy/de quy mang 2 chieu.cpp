#include<iostream>
using namespace std;

void nhap2chieu(int a[][100], int n, int m, int i=0, int j=0)
{
	if ( i == n )
		return;
	if ( j == m )
	{
		nhap2chieu(a,n,m,i+1,0);
		return;
	}	
	cout<<"Nhap phan tu thu ["<<i<<"] ["<<j<<"]: ";
	cin>>a[i][j];
	nhap2chieu(a,n,m,i,j+1);
}
void xuat2chieu(int a[][100], int n, int m, int i=0, int j=0)
{
	if ( i==n)
		return;
	if ( j==m)
	{
		cout<<endl;
		xuat2chieu(a,n,m,i+1,0);
		return;
	}
	cout<<a[i][j]<<" ";
	xuat2chieu(a,n,m,i,j+1);
}
int main()
{
	int n;
	int m;
	cout<<"Nhap so luong dong: "; cin>>n;
	cout<<"Nhap so luong cot: "; cin>>m;
	int a[100][100];
	nhap2chieu(a,n,m);
	xuat2chieu(a,n,m);
	return 0;
}