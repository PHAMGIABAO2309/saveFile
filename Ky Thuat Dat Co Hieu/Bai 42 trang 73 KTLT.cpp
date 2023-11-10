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
int ktgiatrichan(int a[],int n)
{
	bool flag = 0;
	for(int i=0; i<n;i++)
	{
		if(a[i]%2==0)
		{
			flag = 1;
			break;
		}
	}
	cout << flag;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	ktgiatrichan(a,n);
}
