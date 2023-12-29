#include<iostream>
using namespace std;
int gt(int n)
{
	if (n==0)
		return 1;
	return n * gt(n -1);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<gt(n);
}