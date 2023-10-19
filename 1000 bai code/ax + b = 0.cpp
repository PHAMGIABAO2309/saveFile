#include<iostream>
using namespace std;
int main()
{
	float a,b,x;
	cout<<"nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	if( a== 0)
	{
		if(b==0)
			cout<<"phuong trinh vo so nghiem";
		else if( b !=0)
			cout<<"Phuong trinh vo nghiem";
	}
	else
	{
		x = -b/a;
		cout<<"phuong trinh co 1 nghiem: "<<x;
	}
}
