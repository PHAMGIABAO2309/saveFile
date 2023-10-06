#include<iostream>
#include<cmath>
using namespace std;


//O(log n )
bool nt ( int n)
{
	for ( int i = 2 ; i <= sqrt(n);i++)
	
	{
		if(n%i == 0)
		return false;
	}
	return n>1;
}
bool nt2( int n) {
	for ( int i = 2; i<n;i++)
	{
		if(n%i== 0)
		return false;
	}
	return true;
}
int main() 
{
	int a= 10;
	
	int n; cin>>n;
	for (int i =1  ; i<= n;i++)
	{
		if(nt(i))
		cout<<i<<endl;
	}
}
