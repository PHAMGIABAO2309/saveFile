#include<iostream>
using namespace std;
float tong(int n)
{
	if( n == 0)
		return 0.5;
	return tong(n-1) + (2.0*n +1)/(2.0*n + 2);
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	float s = tong(n);
	cout<<s;
}
		