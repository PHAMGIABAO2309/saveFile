#include<iostream>
using namespace std;
bool namnhuan(int n)
{
	if( n%400 ==0)
		return true;
	if(n%4 ==0 && n%100 != 0)
		return true;
	return false;
}
int main()
{
	int n;
	cout<<"Nhap so nam: "; cin>>n;
	if(namnhuan(n))
		cout<<"la nam nhuan";
	else 
		cout<<"khong la nam nhuan";
}