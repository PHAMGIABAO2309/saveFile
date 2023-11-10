#include<iostream>
using namespace std;
void lietke(float a[],int n, float x, float y)
{
	bool chotruoc = false;
	for(int i = 0; i<n; i++)
	{
		//kiem tra so co thuoc doan tu x den y hay khong
		if(a[i] >= x && a[i] <= y)
		{
			cout<<a[i]<<" ";
			chotruoc = true;
		}
	}
	if(!chotruoc)
	{
		cout<<"Khong co so thoa dieu kien cho truoc";
	}
}
int main()
{
	int n;
	cout<<"Nhap so phan tu trong mang: "; cin>>n;
	float a[n];
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
	float x,y;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap y: "; cin>>y;
	cout<<"Cac so thuoc doan tu ["<<x<<"] den ["<<y<<"] cho truoc la: ";
	lietke(a,n,x,y);
}