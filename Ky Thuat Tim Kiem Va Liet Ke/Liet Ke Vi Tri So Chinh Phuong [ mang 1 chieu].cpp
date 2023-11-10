#include<iostream>
#include<cmath>
using namespace std;
bool ktsochinhphuong(int n)
{
	int can = sqrt(n); //tinh can ban 2 cua n
	return can*can == n; /* tra ve gia tri true neu can bac 2 cua n la 1 so nguyen
							va bang chinh so nguyen n */
}
void lietkevitrisochinhphuong(int a[],int n)
{
	for(int i =0; i<n; i++)
	{
		if(ktsochinhphuong(a[i]))
			cout<<"Vi tri ["<<i+1<<"]: "<<a[i]<<" la so chinh phuong \n";
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	int a[n];
	for(int i =0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
	lietkevitrisochinhphuong(a,n);
}