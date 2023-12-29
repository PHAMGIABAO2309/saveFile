#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Nhap so thu 1: "; cin>>a;
	cout<<"Nhap so thu 2: "; cin>>b;
	cout<<"Nhap so thu3 : "; cin>>c;
	int max = a;
	if ( b > max )
		max = b;
	else if ( c > max)
		max = c;
	cout<<"So lon nhat trong 3 so: "<<max;
}