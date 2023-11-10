//viet ham dem so luong SNT < 100 trong mang
#include<iostream>
#include<cmath>
using namespace std;

bool KTSNT(int n)
{
	if ( n < 2)
		return false;
	else if(n > 2)
		if(n%2 == 0) // meu la so chan
			return false;
		//kiem tra cac so le:
		for(int i = 3; i <= sqrt((float)n); i+=2 )
			{
				if(n%i==0)
					return false;
			}
	return true;
}

int demSNT(int a[100],int n)
{
	int count = 0;
	for(int i = 0;i<n;i++)
	{
		if(KTSNT(a[i]) == true && a[i] <100 )
			count++;
	}
	return count;
}
int main()
{
	int n;
	cout<<"Nhap so luong so nguyen to: "; cin>>n;
	int a[100];
	do
	{
		if(n<=0)
			cout<<"Khong hop le";
			break;
	}
	while(n<=0);
	for(int i = 0; i<n;i++)
	{
		cout<<"[ "<<i<<" ]:  ";
		cin>>a[i];
	}
	int count = demSNT(a,n);
	
		cout<<"so luong cac so nguyen to: "<<count;
	
		
}
