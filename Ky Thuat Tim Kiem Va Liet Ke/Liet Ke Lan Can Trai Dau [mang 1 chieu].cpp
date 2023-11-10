#include<iostream>
using namespace std;
void lietkelancantraidau(float a[],int n)
{
	for(int i = 1; i< n-1; i++)
	{
		if((a[i]*a[i-1] <0) || (a[i]*a[i+1]<0))
		{
			cout<<a[i]<<" ";
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	float a[n];
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
	cout<<"Cac gia tri co it nhat 1 lan can trai dau: ";
	lietkelancantraidau(a,n);
}