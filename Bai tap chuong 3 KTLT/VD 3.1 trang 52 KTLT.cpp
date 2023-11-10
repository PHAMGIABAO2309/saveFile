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
int demsonguyento(int a[MAX],int n)
{
	int dem = 0;
	for(int i =0; i<n;i++)
	{
		if(Nguyento(a[i]))
			dem++;
	}
	return dem;
}
bool kiemtramangtangdan(int a[MAX],int n)
{
	for(int i = 0; i<n-1;i++)
	{
		if(a[i]>a[i+1])
			return 0;
	}
	return 1;
}

void sapxepnguyento(int a[MAX],int n)
{
	for(int i = 0;i<n-1;i++)
	{
		for(int j = i+1; j<n;j++)
		{
			if(Nguyento(a[i]) && Nguyento(a[j]) && a[i] > a[j])
			{
				int hv = a[i];
				a[i] =a[j];
				a[j] = hv;
			}
		}
	}
}
int tongchucuaso(int n)
{
	int s = 0;
	while (n >0)
	{
		s = s + n%10;
		n = n/10;
	}
	return s;
}

int tongchusocuaday(int a[MAX],int n)
{
	int s =0;
	for(int i = 0 ; i < n;i++)
	{
		s = s + tongchucuaso(a[i]);
	}
	return s;
}

int main()
{
	int n;
	int a[MAX];
	cout<<"Nhap so phan tu: ";
	cin>>n;
	Nhap(a,n);
	cout<<"\nMang co "<<demsonguyento(a,n)<<" so nguyen to!";
	if(kiemtramangtangdan(a,n))
	{
		cout<<"\nMang duoc sap xep tang dan";
	}
	else
	{
		cout<<"\nMang khong duoc sap xep tang dan";
	}
	cout<<"\nMang sap xep tang dan: ";
	sapxepnguyento(a,n);
	Xuat(a,n);
	int tong = tongchusocuaday(a,n);
	cout<<"\nTong cac chu so cua tat ca cac phan tu cua mang: "<<tong;	
}