#include<iostream>
using namespace std;
void Nhap(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j < m; j++)
		{
			cout<<"Nhap phan tu thu ["<<i+1<<"] ["<<j+1<<"]: ";
			cin>>a[i][j];
		}
	}
}
void Xuat(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j < m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void tongphantutamgiacduoi(int a[][100], int n, int m)
{
	int s = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j < m; j++)
		{
			if ( a[i] > a[j])
			{
				s += a[i][j];
			}
		}
		
	}
	cout<<"Tong phan tu thuoc tam giac duoi: "<<s;
}
int main()
{
	int n,m;
	int a[100][100];
	cout<<"Nhap so hang: "; cin>>n;
	cout<<"Nhap so cot: "; cin>>m;
	Nhap(a,n,m);
	Xuat(a,n,m);
	tongphantutamgiacduoi(a,n,m);
}