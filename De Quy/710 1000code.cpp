//S(n) = x + x^2/2! + x^3/3! + ... + x^n/n!
#include<iostream>
using namespace std;
float Tinh(float x, int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return x;
    return (1 + x/n) * Tinh(x, n - 1) - (x/n) * Tinh(x, n - 2);
}
int main()
{
	float x;
	int n;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap n: "; cin>>n;
	float s = Tinh(x,n);
	cout<<s;
}
