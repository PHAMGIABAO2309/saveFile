#include<iostream>
using namespace std;
long fibo(int n)
{
	if(n <= 1)
		return n;
	return fibo(n-1) + fibo(n-2);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"fibo= "<<fibo(n);
}