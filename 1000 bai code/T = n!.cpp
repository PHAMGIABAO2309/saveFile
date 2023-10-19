#include<iostream>
using namespace std;
int gt(int n)
{
	int giaithua = 1;
	for(int i = 1;i<=n;i++)
	{
		giaithua *=i;
	}
	return giaithua;
}
int main()
{
	int n;
	cout<<"Nhap n: ";cin>>n;
	int T = gt(n);
	cout<<"T= "<<T;
}
