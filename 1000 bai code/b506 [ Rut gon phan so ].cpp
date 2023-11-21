#include<iostream>
using namespace std;
int ucln(int a , int b)
{
	if(b ==0 ) return a;
	return ucln(b, a%b);
}
void giamphanso( int &tu, int &mau)
{
	int sochia = ucln(tu,mau);
	tu /= sochia;
	mau /= sochia;
}
int main()
{
	int tu;
	int mau;
	cout<<"Nhap tu: "; cin>>tu;
	cout<<"Nhap mau: "; cin>>mau;
	giamphanso(tu,mau);
	cout<<tu<<"/"<<mau;
}