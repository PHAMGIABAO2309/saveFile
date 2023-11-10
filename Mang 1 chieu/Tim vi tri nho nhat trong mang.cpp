#include<iostream>
using namespace std;

float vitrinhonhat(int a[100],int n)
{
	int vtnn = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < a[vtnn])
			vtnn = i;
	}
	return vtnn;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu: "; cin>>n;
	int a[100];
	for(int i = 0 ; i < n ; i++)
	{
		cout<<"[ "<<i<<" ]: ";
		cin>>a[i];
	}
	cout<<"Vi tri nho nhat: "<<vitrinhonhat(a,n);
}
