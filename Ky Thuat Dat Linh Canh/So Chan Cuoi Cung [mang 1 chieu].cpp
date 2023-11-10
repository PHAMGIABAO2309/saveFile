#include<iostream>
using namespace std;
int timsochancuoicung(int a[],int n)
{
	int sochancuoicung = -1;
	for(int i = 0; i<n;i++)
	{
		if(a[i] % 2 == 0)
			sochancuoicung = a[i];
	}
	return sochancuoicung;
} 
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	int a[n];
	for(int i = 0; i< n; i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>a[i];
	}
	int kq = timsochancuoicung(a,n);
	if( kq == -1)
	{
		cout<<"Mang khong co gia tri chan";
	}
	else
	{
		cout<<"So chan cuoi cung trong mang la: "<<kq;
	}
}