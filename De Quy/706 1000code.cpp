/* hàm tính căn bậc 3 của 1 số thực
theo đệ quy theo 2 hàm exp và ln */
#include<iostream>
#include<cmath>
using namespace std;
float sqrt3(float x)
{
	if( x == 0)
		return 0;
	if ( x < 0 )
		return (-sqrt3(-x));
	return (exp((log(x)/3))); //exp: hàm mũ //log: hàm logarit
}
int main()
{
	float x;
	cout<<"Nhap x: "; cin>>x;
	x = sqrt3(x);
	cout<<"ket qua: "<<x;
}