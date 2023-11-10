#include<iostream>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
int demgtriduongchiahet7(int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0 && a[i]%7==0)
		{
			count++;
		}
	}
	cout<<"So Luong Gia tri duong chia het cho 7 la:  "<<count;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	demgtriduongchiahet7(a,n);
}