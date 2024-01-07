#include<iostream>
using namespace std;
//--a
void nhap(int a[], int n)
{
	for(int i=0; i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<": ";
		cin>>a[i];
	}
}
void xuat(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";	
	}
}
//--b
int tong(int a[], int n)
{
	int s = 0;
	for(int i=2; i<n-2; i++)
	{
		if (a[i] > a[i-1] && a[i] > a[i-2] && a[i] > a[i+1] && a[i] > a[i+2])
		{
			s += a[i];
		}
	}
	return s;
}
//--c
bool ktdoixung(int a[], int n)
{
	for(int i=0; i<n/2; i++)
	{
		if(a[i] != a[n-i-1])
		{
			return false;
		}
	}
	return true;
}
//--d
bool ktnguyento(int n)
{
	if(n < 2)
		return false;
	for(int i=2; i*i <=n; i++)
	{
		if ( n % i ==0)
			return false;
	}
	return true;
}
void demsonguyento(int a[], int n)
{
	int count = 0;
	for(int i=0; i<n; i++)
	{
		if(ktnguyento(a[i]))
		{
			++count;
			cout<<a[i]<<" ";
		}
	}
	cout<<"\nCo tat ca "<<count<<" so nguyen to.";
}
int main()
{
	int n; int a[n];
	cout<<"Nhap so luong n: "; cin>>n;
	//a
	nhap(a,n);
	xuat(a,n);
	//b
	int kq = tong(a,n);
	cout<<"\nTong phan tu lon hon 2 phan tu ke truoc va ke sau: "<<kq;
	//c
	if(ktdoixung(a,n))
	{
		cout<<"\nMang doi xung";
	}
	else
		cout<<"\nMang khong doi xung";
	//d
	cout<<"\n So nguyen to tu min den max: ";
	demsonguyento(a,n);
}