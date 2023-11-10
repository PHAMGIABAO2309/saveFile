#include<iostream>
using namespace std;
bool ktdoixung(int n)
{
	int sodaonguoc =0;
	int tam = n;
	while(tam >0)
	{
		sodaonguoc = sodaonguoc * 10 + tam % 10;
		tam /= 10;
	}
	return n == sodaonguoc;
}
int soluonggiatridoixung(int a[],int n)
{
	int count=0;
	for(int i =0; i<n; i++)
	{
		if(ktdoixung(a[i]))
		{
			cout<<a[i]<<" ";
			count++;
		}
	}
	cout<<"So Luong gia tri Doi Xung la: "<<count;
}
void Nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	soluonggiatridoixung(a,n);
}