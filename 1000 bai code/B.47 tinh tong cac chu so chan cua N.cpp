//tinh tong cac chu so chan cua so nguyen duong n
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int count = 0;
	double S=0;
	cout<<"Nhap n: ";cin>>n;
	while(n>0)
	{
		int tam = n%10; //lay chu so cuoi cung cua n
		if(tam % 2 ==0) //kiem tra neu chu so chan
		{
			n/=10; //loai bo chu so cuoi cung cua n
			count++; //tang bien dem len 1
		}
		S = S + tam;
	}
	cout<<"tong cac so chan: "<<S;
}
