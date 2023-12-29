//S(n) = 1 + 1/3 + 1/5 + ... + 1/2n + 1
#include<iostream>
using namespace std;
float tong(int n)
{
	if ( n== 0)
		return false;
	if( n == 1)
		return 1.0/(2+1);
	return 1.0/(2*n + 1) + tong(n-1);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<tong(n);
}