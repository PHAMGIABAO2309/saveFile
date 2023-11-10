// tính trung bình cong n so nguyên
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
		cout<<"Nhap n thu "<<i+1<<" : ";
		cin>>a[i];
	}
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	float tbc = sum/n;
	cout<<"Trung binh cong: "<<tbc;
}
