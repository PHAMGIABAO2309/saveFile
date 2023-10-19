//nhap vao 1 day so nguyen.Hien thi day so do ra man hinh
#include<iostream>
using namespace std;
int main() 
{
	int a[50];
	int i,n;
	cout<<"Nhap so phan tu cua mang: "; cin>>n;
	for(int i = 0; i<n;i++)
	{
		cout<<"Phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
	cout<<"\n Mang vua nhap la: ";
	for(int i = 0; i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
