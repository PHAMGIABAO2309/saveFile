//30
#include<iostream>
using namespace std;
bool kt(int n)
{
	int S = 0;
	for(int i =1 ;i<n;i++)
	{
		if(n%i==0 ) 
		{
			S = S + i;
		}
	}
	if(S == n)
	{
		return true;
	}
	return false;
}
int main()
{
	int  n;
	cout<<"Nhap n: ";cin>>n;
	if(kt(n))
	{
		cout<<n<<"la so hoan thien";
	}
	else
		cout<<"Khong la so hoan thien";
}
