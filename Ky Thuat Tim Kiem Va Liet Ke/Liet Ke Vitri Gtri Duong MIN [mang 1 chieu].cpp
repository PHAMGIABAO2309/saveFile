#include<iostream>
using namespace std;
void vitri_giatriduongnhonhat(float a[],int n)
{
	float min = -1;
	int vitri = -1;
	for(int i = 0; i<n;i++)
	{
		if(a[i] >0 && (min = -1 || a[i] < min ) )
		{
			min = a[i];
			vitri = i;
		}
	}
	if(min == -1)
		cout<<"Khong co gia tri duong trong mang";
	else
		cout<<"Vi tri ["<<vitri+1<<"] "<<min<<" la gia tri duong nho nhat";
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	float a[n];
	for(int i =0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
	vitri_giatriduongnhonhat(a,n);
}