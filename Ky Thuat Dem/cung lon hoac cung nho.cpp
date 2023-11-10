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
int demcunglonhoaccungnho(int a[],int n)
{
	int count =0;
	for(int i=1; i<n-1;i++)
	{
		if(a[i]>a[i-1]&&a[i]>a[i+1])
		{
			count++;
		}
		else if(a[i]<a[i-1]&&a[i]<a[i+1])
		{
			count++;
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	demcunglonhoaccungnho(a,n);
	int kq = demcunglonhoaccungnho(a,n);
	cout<<"So luong phan tu cung lon hon hoac nho hon cac phan tu xung quanh: "<<kq;
}