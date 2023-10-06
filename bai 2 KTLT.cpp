#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a,b,c;
	cout<<"Nhap a= "; cin>>a;
	cout<<"Nhap b= ";cin>>b;
	cout<<"Nhap c= ";cin>>c;
	double delta = b*b - 4*a*c;
	if ( delta > 0) {
		double x1 = ( -b + sqrt(delta)/(2*a));
		double x2 = ( - b - sqrt(delta) / ( 2*a));
		cout<<"Phuong trinh co 2 nghiem: x1= "<<x1<<"va x2= "<<x2<<endl;
	}
	else if (delta == 0) 
	{
		double x = -b/(2*a);
		cout<<"Phuong trinh co nghiem kep: x= "<<x<<endl;
	}
	else {
		cout<<"PHuong trinh vo nghiem"<<endl;
	}
	return 0;
}
