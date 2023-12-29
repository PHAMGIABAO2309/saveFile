//S(n) = 1/2 + 1/4 + 1/6 + ... 1/2n
#include<iostream>
using namespace std;
float tong(int n)
{
	if(n==1)
		return 1.0/2;
	return 1.0/(2*n) + tong(n-1);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	cout<<tong(n);
}