//S(n) = 1 x 2 x 3 x ... x n ( giong tinh giai thua )
#include<iostream>
using namespace std;
int tong(int n)
{
	if( n == 1)
		return 1;
	if ( n == 0)
		return 0;
	return n * tong(n-1);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<tong(n);
}