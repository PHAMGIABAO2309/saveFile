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
int sutuongquan_chan_le(int a[],int n)
{
	int chan_count=0;
	int le_count=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			chan_count++;
		}
		else
		{
			le_count++;
		}
	}
	cout<<"\nSo luong chan: "<<chan_count;
	cout<<"\nSo luong le: "<<le_count;
	float sutuongquan = (float)chan_count/le_count;
	cout<<"\nSu tuong quan giua so chan & le: "<<sutuongquan;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	sutuongquan_chan_le(a,n);
}