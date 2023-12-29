//S(n) = 1/1*2 + 1/2*3 + 1/3*4 + .. + 1/n * ( n+1)
#include<iostream>
using namespace std;
float tong(int n)
{
	if ( n== 0)
		return false;
	if( n == 1)
		return 1.0/(1*2);
	return 1.0/(n*(n+1)) + tong(n-1);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<tong(n);
}