#include<iostream>
using namespace std;
int uocsoleMAX(int n)
{
	if ( n%2 != 0)
		return n;
	return uocsoleMAX(n/2);
}
int main()
{
	int n;
	cout<<"nhap n: "; cin>>n;
	cout<<uocsoleMAX(n);
}