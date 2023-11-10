#include<iostream>
#include<cmath>
using namespace std;
void lietke(int a[],int n)
{
	for(int i =0; i < n-1; i++)
	{
		if(abs(a[i]) > abs(a[i+1]))
		{
			cout<<a[i]<<endl;
		}
		else
		{
			cout<<a[i+1]<<endl;
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	int a[n];
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
	cout<<"Cac gia tri trong mang thoa dieu kien lon hon tri tuyet doi cua gia tri dung lien sau no: \n ";
	lietke(a,n);
	return 0;
}

