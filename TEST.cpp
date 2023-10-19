#include<iostream>
#include<cmath>
using namespace std;
float f(float x)
{
	return pow(x+7,(x+10));
}
int main()
{
	float x;
	cout<<"Nhap x: ";
	cin>>x;
	float kq = f(x);
	cout<<"f(x)= "<<kq;
}
