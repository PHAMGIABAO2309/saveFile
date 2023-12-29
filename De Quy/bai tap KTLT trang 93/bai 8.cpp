#include<iostream>
using namespace std;
int demsole(int n)
{
	if(n==0)
		return 0;
	int tam = n%10;
	if(tam%2 == 1)
		return demsole(n/10) +1;
	return demsole(n/10);
}
int main()
{
	int n;
	cout<<"Nhap so luong chu so n: "; cin>>n;
	cout<<demsole(n);
}