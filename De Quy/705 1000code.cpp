/* cho mảng 1 chiều số thực
viết hàm đếm số lượng giá trị dương trong mảng
bằng đệ quy */
#include<iostream>
using namespace std;
int demgiatriduong(float a[], int n)
{
	if ( n == 0)
		return 0;
	if ( a[n - 1 ] > 0)
		return 1 + demgiatriduong(a,n - 1);
	return demgiatriduong(a,n - 1);
}
void Nhap(float a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
}
void Xuat(float a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int n;
	float a[100];
	cout<<"Nhap so luong: "; cin>>n;
	Nhap(a,n);
	Xuat(a,n);
	int dem = demgiatriduong(a,n);
	cout<<"So luong gia tri duong: "<<dem;
}