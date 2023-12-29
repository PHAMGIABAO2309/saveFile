/* cho mang 1 chieu ( so nguyen )
viet ham tinh S cac so CHAN trong mang = DE QUY */
#include<iostream>
using namespace std;
int tinhtongsochan(int a[], int n)
{
	if( n== 0)
		return 0;
	if(a[n-1] % 2 == 0) //kt xem ptu cuoi co phai so chan?
		return tinhtongsochan(a,n-1) + a[n-1];
	return tinhtongsochan(a,n-1);
}
void Nhap(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
}
void Xuat(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	int a[n];
	cout<<"Nhap so luong phan tu: "; cin>>n;
	Nhap(a,n);
	Xuat(a,n);
	int tong = tinhtongsochan(a,n);
	cout<<"\n Tong cac so chan : "<<tong;
	
	
}
