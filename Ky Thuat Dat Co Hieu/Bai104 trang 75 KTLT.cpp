#include<iostream>
using namespace std;
bool ktdoixungddc(int a[][100], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(a[i][j] != a[j][i])
			{
				return false;
			}
		}
	}
	return true;
}
void Nhap(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"Nhap phan tu thu ["<<i+1<<"] ["<<j+1<<"]:" ;
			cin>>a[i][j];
		}
	}
}
void Xuat(int a[][100], int n,int m)
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
	int a[100][100];
	cout<<"Nhap so dong: "; cin>>n;
	cout<<"Nhap so cot: "; cin>>m;
	Nhap(a,n,m);
	Xuat(a,n,m);
	int kt = ktdoixungddc(a,n);
	if(kt)
	{
		cout<<"Ma tran doi xung qua duong cheo chinh";
	}
	else
	{
		cout<<"Ma tran khong doi xung qua duong cheo chinh";
	}
}
