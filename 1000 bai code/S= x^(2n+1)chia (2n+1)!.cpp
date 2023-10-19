#include<iostream>
using namespace std;
int main()
{
	int x,n;
	double S=1, tam = 1, gt =1;
	cout<<"Nhap x: ";cin>>x;
	cout<<"Nhap n: ";cin>>n;
	for(int i =1;i<=2*n;i++)
	{
		tam = tam*x; //tinh x^(2n+1)
		gt = gt*i; //tinh (2n+1)!
		S = S + tam/gt;
	}
	cout<<"S= "<<S;
}
