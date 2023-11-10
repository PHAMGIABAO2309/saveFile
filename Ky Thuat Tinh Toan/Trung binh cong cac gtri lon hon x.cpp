#include<iostream>
using namespace std;
void Nhap(float a[],int n)
{
	
	for(int i =0; i<n;i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
float tbcgiatrilonhongiatri_X(float a[],int n,float x)
{
	float s=0;
	float count=0;
	for(int i=0; i<n; i++)
	{
		if(a[i] > x)
		{
			s+=a[i];
			count++;
		}
	}
	return float(s)/count;
}
int main()
{
	int n;
	float x;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	float a[n];
	Nhap(a,n);
	cout<<"Nhap x thuoc trong mang: "; cin>>x;
	float tbc = tbcgiatrilonhongiatri_X(a,n,x);
	cout<<"Trung binh cong cac gia tri lon hon x: "<<tbc;
}