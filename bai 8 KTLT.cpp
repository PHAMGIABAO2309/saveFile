#include<iostream>
#include<cmath>
using namespace std;
bool KTCP(int x)
{
	int check = sqrt(x);
	if(check*check == x)
		return true;
	else
		return false;
}
int main() 
{
	int x;
	cout<<"nhap x: "; cin>>x;
	if(KTCP(x))
		cout<<"la so chinh phuong";
	else
		cout<<"Khong la so chinh phuong";
}
