//tinh tich cac  chu so cua so nguyen duong n
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int count = 0;
	cout<<"Nhap n: ";cin>>n;
	while(n>0)
	{
		int tam = n%10; //lay chu so cuoi cung cua n
		if(tam % 2 !=0) //kiem tra neu chu so le
		{
			count++; //tang bien dem len 1
		}
		n/=10;
	}
	cout<<"So luong chu so le: "<<count;
}
