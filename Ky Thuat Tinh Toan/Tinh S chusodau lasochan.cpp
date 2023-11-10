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
int tongchusodaulasochan(int a[],int n)
{
	int s=0;
	for(int i =0; i<n;i++)
	{
		if(a[i]> 0 && (i%2==1))
		{
			s+=a[i];
		}
	}
	return s;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	int s = tongchusodaulasochan(a,n);
	cout<<"Tong chu so dau tien la so chan: "<<s;
}