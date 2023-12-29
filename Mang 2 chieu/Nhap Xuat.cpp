#include<iostream>
using namespace std;
void Nhap(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"Nhap phan tu thu ["<<i<<"] ["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
}
void Xuat(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int n,m;
	cout<<"Nhap so dong: "; cin>>n;
	cout<<"Nhap so cot: "; cin>>m;
	int a[100][100];
	Nhap(a,n,m);
	Xuat(a,n,m);
}