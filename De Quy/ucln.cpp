#include<iostream>
using namespace std;
int ucln(int a, int b)
{
	if( b == 0)
		return a;
	return ucln(b,a%b);
}
int main()
{
	int a,b;
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<"uoc chung lon nhat: "<<ucln(a,b);
}