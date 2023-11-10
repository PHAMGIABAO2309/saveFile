#include<iostream>
#include<cmath>
using namespace std;
void lietke(int a[],int n)
{
	for(int i= 1; i<n-1; i++)
	{
		if(a[i] < abs(a[i+1]) && a[i] > abs(a[i-1]))
		{
			cout<<a[i]<<" ";
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong trong mang: "; cin>>n;
	int a[n];
	for(int i = 0; i<n;i++)
	{
		cout<<"nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
	cout<<"Cac gia tri thoa: ( nho hon tri tuyet doi cua gtri dung lien sau no va lon hon gia tri dung lien truoc no): \n";
	lietke(a,n);
}