#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][100],int n, int m)
{
	for(int i = 0 ; i < n ;i++)
	{
		for(int j = 0 ; j <m ; j++)
		{
			cin>>a[i][j];
		}
	}
}

int main()
{
	int n , m;cin>>n;
	string a[n];
	cin.ignore();
	for(int i  = 0 ; i < n  ; i++)
	{
		getline(cin,a[i]);
	}
	for(int i = 0 ; i < n; i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
