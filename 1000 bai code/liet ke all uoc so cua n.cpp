#include<iostream>
using namespace std;
int main()
{
	int i, n;
	cout<<"Nhap n: ";cin>>n;
	for(int i =1 ;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<" "<<i;
			i++;
		}
	}
}
