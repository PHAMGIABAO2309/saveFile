#include<iostream>
using namespace std;
void Nhap(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
}
void xoaphantulonnhat(int a[], int n)
{
	int max = a[0];
	int vitrimax = 0;
	for(int i=1; i<n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			vitrimax = i;
		}
	}
	for(int i=max; i<n-1; i++)
	{
		a[i] = a[i+1];
	}
	n--;
	cout<<"mang sau khi xoa phan tu: ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
//kiem tra xem mang co toan chan hay khong ?
int kttoanchan(int a[], int n)
{
	bool kt = 1;
	for(int i=0; i<n; i++)
	{
		if ( a[i] % 2 != 0)
		{
			kt = 0;
			break;
		}
	}
	return kt;
}
//kiem tra xem mang co toan am hay khong ?
int kttoanam(int a[], int n)
{
	bool kt = 1;
	for(int i=0; i<n; i++)
	{
		if ( a[i] > 0)
		{
			kt = 0;
			break;
		}
	}
	return kt;
}
//tao mang chi chua cac phan tu chan:
void chichuachan(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		if( a[i]%2==0)
		{
			cout<<a[i]<<" ";
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu : "; cin>>n;
	int a[n];
	Nhap(a,n);
	//xoaphantulonnhat(a,n);
	//cout<<"kq; "<<kttoanam(a,n);
	chichuachan(a,n);
}