#include<iostream>
using namespace std;
int demsoluongso(int n)
{
	if ( n== 0)
		return 0;
	return demsoluongso(n/10) + 1;
}
int main()
{
	int n;
	cout<<"Nhap so luong chu so n: "; cin>>n;
	cout<<demsoluongso(n);
}