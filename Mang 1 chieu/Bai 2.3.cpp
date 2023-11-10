#include<iostream>
using namespace std;

//ham kiem tra so hoan chinh
bool SHC(int n)
{
	int sum = 1;
	for(int i = 2 ; i*i <= n ; i++)
	{
		if(n%i == 0)
		{
			sum += i + (n/i);
		}
	}
	return sum == n;
}
int main()
{
	int n;
	cout<<"Nhap so phan tu: "; cin>>n;
	cout<<SHC(n);
}
