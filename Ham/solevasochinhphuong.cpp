#include<iostream>
#include<cmath>
using namespace std;
bool ktsochanle(int n)
{
	cout<<"Cac so le trong tu 1 den "<<n<<" la: ";
	for(int i=1; i<=n; i= i+2)
	{
		cout<<i<<" ";
	}
}
bool ktsochinhphuong(int n)
{
	int can = sqrt(n);
	return can*can == n;
}
int sochinhphuong(int n)
{
	cout<<"\nCac so chinh phuong tu 1 den "<<n<<" la: ";
	for(int i=1; i<=n; i++)
	{
		if(ktsochinhphuong(i))
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap 1 so: "; cin>>n;
	ktsochanle(n);
	sochinhphuong(n);
}