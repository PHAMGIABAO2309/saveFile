#include<iostream>
using namespace std;
long tong(int n)
{
	if(n==0) return 0;
	return n + tong(n-1);
}
int main()
{
	int n;
	int s=0;
	cout<<"Nhap n= "; cin>>n;
	s = tong(n);
	cout<<"Tong: "<<s;
}