//dem so luong chu so cua so nguyen duong n
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int count = 0;
	cout<<"Nhap n: ";cin>>n;
	while(n!=0)
	{
		n/=10;
		count++;
	}
	cout<<"so luong chu so: "<<count;
}
