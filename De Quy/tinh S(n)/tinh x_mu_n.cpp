//S(n) = x_mu_n
#include<iostream>
using namespace std;
float tong(float x, int n)
{
	if ( n==1)
		return x;
	if ( n== -1)
		return 1.0/x;
	if ( n < 0)
		return tong(x,n+1) * 1.0/x;
	if ( n== 0)
		return 1;
	return tong(x,n-1) * x;
}
int main()
{
	float x;
	int n;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap n: "; cin>>n;
	float s = tong(x,n);
	cout<<s;
}