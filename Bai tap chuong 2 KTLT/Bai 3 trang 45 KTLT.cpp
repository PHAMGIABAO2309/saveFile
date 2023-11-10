#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c;
	float chuvi, dientich, p;
	cout<<"Nhap 3 canh cua tam giac: ";
	cin>>a>>b>>c;
	
	if ( a + b > c && a + c > b && b + c > a)
	{
		chuvi = a + b + c;
		p = chuvi/2;
		dientich = sqrt(p*(p-a)*(p -b)*(p -c));
		cout<<"Chu vi cua tam giac la: "<<chuvi<<endl;
		cout<<"Dien tichs cua tam giac la: "<<dientich<<endl;
	}
	else
	{
		cout<<"Khong tao thanh tam giac"<<endl;
	}
}
