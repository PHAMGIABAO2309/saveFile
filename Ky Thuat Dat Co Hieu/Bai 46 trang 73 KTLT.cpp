#include<iostream>
using namespace std;
void Nhap(int a[],int &n)
{
	do 
	{
		cout<<"Nhap so phan tu: "; cin>>n;
		if( n <= 0 )
			cout<<"So phan tu khong hop le.Xin kiem tra lai!";
	}
	while( n <= 0);
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
int ktdangsong(int a[],int n)
{
	int flag = 1;
	for(int i=1; i< n-1; i++)
	{
		if((a[i] < a[i-1] && a[i] > a[i+1]) || (a[i] > a[i-1] && a[i] < a[i+1]))
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	int flag = ktdangsong(a,n);
	if(flag == 1)
	{
		cout<<"Cac phan tu trong mang co dang song";
	}
	else cout<<"0 co";
}