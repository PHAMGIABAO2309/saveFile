#include<iostream>
using namespace std;
int tong(int x, int n)
{
	if ( n == 0)
		return 0;
	return x*2 + tong(x,n-1);
}
int main()
{
	int x, n;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Tong: "<<tong(x,n);
}