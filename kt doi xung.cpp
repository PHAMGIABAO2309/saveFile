#include<iostream>
using namespace std;
bool ktdoixung(int a[], int n)
{
	for(int i=0; i<n/2; i++)
	{
		if ( a[i] != a[n-i-1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	if ( ktdoixung(a,n))
		cout<<"doi xung";
	else cout << " khong doi xung";
}