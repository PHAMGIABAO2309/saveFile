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
bool ktchanle(int a[],int n)
{
	for(int i=0; i<n; i++)
	{
		if(a[i]+a[i+1]%2==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	if(ktchanle(a,n))
		cout<<"Mang co tinh chan le";
	else
		cout<<"Mang 0 co tinh chan le";
}