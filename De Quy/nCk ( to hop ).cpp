#include<iostream>
using namespace std;
int nCk(int n, int k)
{
	if( k==0 || n == k)
		return 1;
	return nCk(n-1,k) + nCk(n-1, k-1);
}
int main()
{
	int n,k;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap k: "; cin>>k;
	int tohop = nCk(n,k);
	cout<<"To hop: "<<tohop;
}