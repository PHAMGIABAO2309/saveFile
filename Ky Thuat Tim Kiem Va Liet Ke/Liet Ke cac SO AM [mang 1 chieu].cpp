#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	float a[n];
	cout<<"Nhap cac phan tu cua mang: \n";
	for(int i =0; i<n;i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
	cout<<"Cac So Am trong mang 1 chieu: \n";
	for(int i = 0; i<n;i++)
	{
		if(a[i]<0)
		{
			cout<<a[i]<<" ";
		}
	}
}