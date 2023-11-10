#include<iostream>
using namespace std;
bool songuyento(int n)
{
	if(n<=1)
		return false;
	for(int i=2; i*i <= n; i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
void Nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
int trungbinhcongsonguyento(int a[],int n)
{
	int s=0;
	int count=0;
	for(int i=0; i<n;i++)
	{
		if(songuyento(a[i]))
		{
			s+=a[i];
			count++;
		}
	}
	return float(s)/count;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	int tbc = trungbinhcongsonguyento(a,n);
	cout<<"Trung binh cong so nguyen to: "<<tbc;
}