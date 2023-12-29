#include<iostream>
using namespace std;
int cobaonhieuchuso(int n)
{
	if( n < 10 )
		return 1;
	return 1 + cobaonhieuchuso(n/10);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Co "<<cobaonhieuchuso(n)<<" chu so";
}