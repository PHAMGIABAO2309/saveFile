#include<iostream>
using namespace std;
float tong(float n)
{
	if( n == 0)
		return 0;
	if ( n == 1)
		return 1;
	return tong(n-1) + 1.0/n;
}
int main()
{
	float n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<tong(n);
}