#include<iostream>
#define MAX 30
using namespace std;
void Nhap(int a[MAX],int n)
{
	for(int i = 0; i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>a[i];
	}
}
void Xuat(int a[MAX],int n)
{
	for(int i = 0 ; i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int Giatrimax(int a[MAX], int n)
{
	int max = a[0];
	for(int i = 1; i<n; i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	return max;
}
int soduonglemax(int a[MAX],int n)
{
	int vt = -1, max = 0;
	for(int i = 0; i<n;i++)
	{
		if(a[i]%2!=0 && a[i]>max)
		{
			max = a[i];
			vt = i;
		}
	}
	return vt;
}
bool Nguyento(int n)
{
	int kq = 0, dem = 0;
	if(n <2) kq = 0;
	else
	{
		for(int i = 2; i<n; i++)
		{
			if(n%i == 0)
				dem++;
		}
		if(dem == 0) kq = 1;
		else kq = 0;
	}
	return kq;
}
int NTMAX(int a[MAX],int n)
{
	int max = 0;
	for(int i = 0; i<n;i++)
	{
		if(Nguyento(a[i]) && a[i]>max)
		{
			max = a[i];
		}
	}
	return max;
}
int  main()
{
	int n;
	int a[MAX];
	cout<<"Nhap so luong phan tu: "; cin>>n;
	Nhap(a,n);
	
	cout<<"\nGia tri lon nhat: "<<Giatrimax(a,n);
	cout<<"\nSo Duong Le Lon Nhat: "<<soduonglemax(a,n);
	cout<<"\nSo Nguyen To MAX: "<<NTMAX(a,n);
}