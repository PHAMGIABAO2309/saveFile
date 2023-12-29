#include<iostream>
using namespace std;
bool ktchiahet(int a, int b)
{
	if(a%b == 0) //kiem tra a chia het cho b
		return 1;
	else 
		return 0;
}
int main()
{
	int a,b;
	cout<<"Nhap vao a: "; cin>>a;
	cout<<"Nhap vao b: "; cin>>b;
	int kt = ktchiahet(a,b);
	if(kt)
		cout<<"chia het";
	else
		cout<<"khong chia het";
}