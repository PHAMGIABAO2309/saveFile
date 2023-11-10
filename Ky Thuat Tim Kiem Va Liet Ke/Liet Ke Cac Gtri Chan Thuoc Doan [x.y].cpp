#include<iostream>
using namespace std;
void lietke(int a[],int n,int x,int y)
{
	bool chotruoc = false;
	for(int i = 0; i<n; i++)
	{
		
			if(a[i] >= x && a[i] <= y )
			{
				if( a[i] % 2 == 0 )
				{
				
				cout<<a[i]<<" ";
				}
			}
	}
	
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	int a[n];
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
	int x,y;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap y: ";
	cin>>y;
	cout<<"Nhap so thuoc doan ["<<y<<"] den ["<<y<<"] la: ";
	lietke(a,n,x,y);
}