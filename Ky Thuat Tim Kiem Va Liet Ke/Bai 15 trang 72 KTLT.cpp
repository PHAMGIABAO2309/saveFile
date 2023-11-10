#include<iostream>
#include<cmath>
using namespace std;
bool ktsonguyento(int n)
{
	if(n  < 2)
		return false;
	for(int i = 2; i<= sqrt(n); i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}
void lietkecacvitrisonguyento(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{	
		if(ktsonguyento(a[i]))
			cout<<"Vi tri ["<<i+1<<"]: "<<a[i]<<" la so nguyen to \n";
	}
}
int main()
{
	int n;
	cout<<"Nhap so phan tu trong mang: "; cin>>n;
	int a[n];
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
	lietkecacvitrisonguyento(a,n);
}