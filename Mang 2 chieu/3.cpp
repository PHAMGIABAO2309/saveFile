/* Liệt kê các hàng trong ma trận có tổng các phần tử lớn nhất */
#include<iostream>
using namespace std;
const int MAX_hang = 100;
const int MAX_cot = 100;
void lietkehangcotonglonnhat(int a[MAX_hang][MAX_cot], int n, int m)
{
	int S[MAX_hang] = {0};
	int S_max = INT_MIN;
	int S_hang_max[MAX_hang];
	int count = 0;
	//tinh tong cac phan tu trong tung hang
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			S[i] = S[i] + a[i][j];
		}
	}
	//tim gia tri lon nhat va luu vi tri cua no
	for(int i=0; i<n; i++)
	{
		if(S[i] > S_max)
		{
			S_max = S[i];
		}
	}
	//liet ke cac hang co tong lon nhat
	for(int i=0; i<n; i++)
	{
		if(S[i] == S_max)
		{
			S_hang_max[count] = i;
			count++;
		}
	}
	//in ket qua
	cout<<"Cac hang co tong cac phan tu lon nhat: ";
	for(int i=0; i<count; i++)
	{
		cout<<S_hang_max[i]+1<<" ";
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
	lietkehangcotonglonnhat(a,n,m);
}