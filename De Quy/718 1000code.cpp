//mảng 1 chiều. hàm đệ quy Nhập xuất mảng
#include<iostream>
using namespace std;
void Nhap(int a[], int n, int i=0)
{
	if( i == n)
		return;
	cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
	cin>>a[i];
	Nhap(a,n,i+1);
}
void Xuat(int a[], int n)
{
	if ( n == 0)
		return;
	Xuat(a, n - 1);
	cout<<a[n-1]<<" ";
}
int main()
{
	int n;
	cout<<"Nhap so luong: "; cin>>n;
	int a[n];
	Nhap(a,n);
	Xuat(a,n);
}