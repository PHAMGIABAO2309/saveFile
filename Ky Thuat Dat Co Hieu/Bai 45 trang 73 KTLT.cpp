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
bool ktmanggiamdan(int a[],int n)
{
	bool giamdan = true;
	for(int i =0; i<n-1; i++)
	{
		if(a[i]<a[i+1])
		{
			giamdan = false;
			break;
		}
	}
	return giamdan;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	int kq = ktmanggiamdan(a,n);
	if(kq)
		cout<<"Mang giam dan";
	else cout<<"Mang khong giam dan";
}