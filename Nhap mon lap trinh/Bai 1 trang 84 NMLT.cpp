#include<iostream>
using namespace std;
//ham tinh Uoc so chung lon nhat
int USCLN(int a, int b)
{
	if(b==0)
		return a;
	else
		return USCLN(b,a%b);
}
//ham tinh boi so chung nho nhat
int BSCNN(int a,int b)
{
	return (a*b)/USCLN(a,b);
}
int main()
{
	int a,b;
	cout<<"Nhap a,b: "; cin>>a>>b;
	cout<<"Uoc so chung lon nhat: "<<USCLN(a,b);
	cout<<"\nBoi so chung nho nhat: "<<BSCNN(a,b);
}

