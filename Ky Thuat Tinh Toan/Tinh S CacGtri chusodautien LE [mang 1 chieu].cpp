#include<iostream>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
}
int tonggtri_chusodautien_LE ( int a[],int n)
{
	int s = 0;
	for(int i =0; i<n; i++)
	{
		int n = a[i];
		while(n >= 10)
		{
			n /=10;
		}
		if(n%2== 1)
		{
			s += a[i];
		}
	}
	cout<<"Tong gia tri cac chu so dau tien la so le: "<<s;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	int a[n];
	Nhap(a,n);
	tonggtri_chusodautien_LE(a,n);
}