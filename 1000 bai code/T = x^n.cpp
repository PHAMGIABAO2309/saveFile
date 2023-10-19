#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double S=0;
	cout<<"Nhap n:";cin>>n;
	for(int i =1;i<=n;i++)
	{
		S = S + (double)1/pow(i,2);
		
	}
	cout<<"S= "<<S;
}
