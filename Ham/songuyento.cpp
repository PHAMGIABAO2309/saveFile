#include<iostream>
using namespace std;
bool ktsonguyento(int n)
{
	if(n <= 1) return false;
	for(int i=2; i*i <= n; i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int songuyento(int n)
{
	cout<<"Cac so nguyen to tu 1 den "<<n<<" la: ";
	for(int i=1; i<=n; i++)
	{
		if(ktsonguyento(i))
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap 1 so: "; cin>>n;
	songuyento(n);
}