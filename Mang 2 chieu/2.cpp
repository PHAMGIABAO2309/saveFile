/* tìm phần tử lớn nhất trong ma trận và
liệt kê các vị trí xuất hiện của nó trong ma trận */
#include<iostream>
using namespace std;
void lietkephantulonnhatvavitri(int a[][100], int n, int m)
{
	int max = a[0][0];
	int vitri_i = 0;
	int vitri_j = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j < m; j++)
		{
			if ( a[i][j] > max)
			{
				max = a[i][j];
				vitri_i = i;
				vitri_j = j;
			}
		}
	}
	cout<<"Phan tu lon nhat la: "<<max<<" tai ["<<vitri_i<<"] ["<<vitri_j<<"]";
}
void Nhap(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j < m; j++)
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
	lietkephantulonnhatvavitri(a,n,m);
}