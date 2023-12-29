#include<iostream>
using namespace std;
int kt(int a[], int l, int r)
{
	if( l >= r)
		return 1;
	if ( a[l] != a[r])
		return 0;
	return kt(a, l + 1, r -1);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{	
		if(kt(a,0,n-1))
			cout<<"yes\n";
		else cout<<"no \n";
	}
	
}