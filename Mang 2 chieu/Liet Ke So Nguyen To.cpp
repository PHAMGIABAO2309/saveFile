/* Cho ma trận số nguyên
Hãy liệt kê các số nguyên tố trong ma trận theo thứ tự xuất hiện
Nếu có số nguyên tố xuất hiện nhiều lần thì chỉ in ra 1 lần duy nhất */
#include<iostream>
using namespace std;
bool ktsonguyento(int n)
{
	if ( n <= 1)
		return false;
	for(int i=2; i*i <= n; i++)
	{
		if(n%i == 0)
		{
			return false;
		}
		return true;
	}
}
int lietkesonguyento(int a[][100], int n, int m)
{
	cout<<"Cac so nguyen to trong mang: ";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j < m; j++)
		{
			if(ktsonguyento(a[i][j])  )
			{
				cout<<a[i][j]<<" ";
			}
		}
	}
}
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

int main()
{
	int n,m;
	int a[100][100];
	cout<<"Nhap so hang: "; cin>>n;
	cout<<"Nhap so cot: "; cin>>m;
	Nhap(a,n,m);
	Xuat(a,n,m);
	lietkesonguyento(a,n,m);
}