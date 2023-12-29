//S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3.n
#include<iostream>
using namespace std;
int tinhgiaithua(int n)
{
	if( n== 1)
		return 1;
	return tinhgiaithua(n-1) * n;
} 
int tong(int n)
{
	if(n==1)
		return 1;
	return tong(n-1) + tinhgiaithua(n);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<tong(n);
}