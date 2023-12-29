#include<iostream>
using namespace std;
int tong(int n)
{
	if( n==1)
		return 1;
	if ( n == 0)
		return 0;
	return tong(n-1) + n;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<tong(n);
}