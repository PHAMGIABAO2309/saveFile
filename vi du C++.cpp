#include<iostream>
using namespace std;
int main() 
{
	int i,n;
	double S;
	long P;
	S = 0;
	P = 1;
	i = 1;
	do
	{
		cout<<"Nhap n: "; cin>>n;
		if( n < 1 )
		{
			cout<<"N phai lon hon hoac bang 1. Xin vui long nhap lai";
		}
	}
	while(n<1);
	while ( i <= n) 
	{
		P = P*i;
		S = S + P;
		i++;
	}
	cout<<"S= "<<S;
	return 0;
}
