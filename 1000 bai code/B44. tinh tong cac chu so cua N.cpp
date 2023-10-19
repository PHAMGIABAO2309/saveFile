//tinh tich cac  chu so cua so nguyen duong n
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double S=1;
	cout<<"Nhap n: ";cin>>n;
	while(n>0)
	{
		int tam = n%10;
		n/=10;
		S= S * tam;
		
	}
	cout<<"S: "<<S;
}
