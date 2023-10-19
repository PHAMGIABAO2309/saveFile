#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double S=1,Smau = 1,x;
	cout<<"Nhap x: ";cin>>x;
	cout<<"Nhap n: ";cin>>n;
	for(int i =1;i<=n;i++)
	{
		Smau = Smau *((x*x)+1)/ ((2*i*(2*i-1)+1));
		S = S + Smau;
	}
	cout<<"S= "<<S;
}
