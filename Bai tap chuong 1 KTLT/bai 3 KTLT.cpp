#include<iostream>
using namespace std;
int main()
{
	int n,tam,somax;
	cout<<"Nhap n: ";cin>>n;
	while( n > 0)
	{
		tam = n%10;
		if( tam > somax)
			somax = tam;
		n/=10;
	}
	cout<<"so lon nhat = "<<somax;
}
