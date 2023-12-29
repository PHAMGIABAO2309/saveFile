#include<iostream>
using namespace std;
int a_mu_b(int a, int b)
{
	if( b==0)
		return 1;
	int x = a_mu_b ( a , b/2 );
	if( b%2 == 1)
		return a*x*x;
	else
		return x*x;
}
int main()
{
	int a,b;
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<"a mu b = "<<a_mu_b(a,b);;
}