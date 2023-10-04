#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	double x;
	double S = 0;
	cout<<"Nhap vao mot so nguyen duong n= "; cin>>n;
	cout<<"Nhap vao mot so thuc x= "; cin>>x;
	double factorial = 1.0;
	double term = x;
	for(int i = 1;i<=n; i++)
	{
		S = S + term;
		factorial = factorial * ( 2*i) * ( 2*i + 1);
		term = term * x * x / factorial;
	}
	cout<<"Gia tri cua bieu thuc S= "<<S<<endl;
}
