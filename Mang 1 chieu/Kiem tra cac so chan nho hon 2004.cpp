//viet ham kiem tra trong mang cac so nguyen chan < 2004 ?
#include<iostream>
using namespace std;

//kiem tra cac so nguyen chan <2004
int kiemtra(int a[100],int n)
{
	int KT=0;
	for(int i = 0;i<n;i++)
	{
		if(a[i]%2 == 0 && a[i] < 2004 )
			KT = 1;
	}
	return KT;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu so nguyen: "; cin>>n;
	int a[100];
	do
	{
		if(n <= 0 )
			cout<<"So phan tu khong hop le";
			break;
	}
	while( n <= 0);
	
	for(int i = 0;i < n;i++)
	{
		cout<<"[ "<<i<<" ]: ";
		cin>>a[i];
	}
	int KT = kiemtra(a,n);
	if(KT == 1)
		cout<<"Tim thay";
	else
		cout<<"Khong timm thay";
}
