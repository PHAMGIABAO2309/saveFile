//S(n) = 1^2 + 2^2 + 3^2 + ... + n^2
#include<iostream>
using namespace std;
int tong(int n)
{
	if ( n== 0)
		return 0;
	if(n==1)
		return 1;
	return n*n + tong(n-1); 
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<tong(n);
}