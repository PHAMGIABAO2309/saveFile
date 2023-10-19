#include<iostream>
using namespace std;
int tongchuso(int n)
{
	int s=0;
	while(n>0)
	{
		int tam = n%10;
		n=n/10;
		s = s + tam;
	}
	return s;
}
int main()
{
	int n;
	cout<<"Nhap n: ";cin>>n;
	cout<<"s= "<<tongchuso(n);
}
