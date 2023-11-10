#include<iostream>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
bool ktmangtangdan(int a[],int n)
{
	bool tangdan = true;
	for(int i =0; i<n-1; i++)
	{
		if(a[i]>a[i+1])
		{
			tangdan = false;
			break;
		}
	}
	return tangdan;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	int kq = ktmangtangdan(a,n);
	if(kq)
		cout<<"Mang tang dan";
	else cout<<"Mang khong tang dan";
}