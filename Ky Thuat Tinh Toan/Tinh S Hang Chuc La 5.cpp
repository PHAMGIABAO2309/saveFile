#include<iostream>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i =0; i<n;i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
void tonghangchucla5(int a[],int n)
{
	int s = 0;
	for(int i=0; i<n; i++)
	{
		int hangchuc = (a[i]/10)%10; //lay chu so hang chuc
		if(hangchuc == 5)
		{
			s += a[i];
		}
	}
	cout<<"Tong cac gia tri co chu so hang chuc la chu so 5: "<<s;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	int a[n];
	Nhap(a,n);
	tonghangchucla5(a,n);
}