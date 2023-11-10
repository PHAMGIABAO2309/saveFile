#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang mot chieu: "; cin>>n;
	float a[n];
	cout<<"Nhap gia tri cho cac phan tu: \n";
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
	float min = a[0];
	int vitri_min = 0;
	for(int i = 1; i<n; i++)
	{
		if(a[i] < min)
			min = a[i];
			vitri_min = i;
	}
	cout<<"Gia tri nho nhat trong mang la: "<<min;
	cout<<"\nVi tri cua Gia tri nho nhat la: "<<vitri_min;
}