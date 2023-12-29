//S(n) = 1 + 1/2 + 1/3 + ... + 1/n
#include<iostream>
using namespace std;
float tong(int n)
{
	if ( n== 0)
		return 0;
	if(n==1)
		return 1;
	return 1.0/n + tong(n-1);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<tong(n);
}