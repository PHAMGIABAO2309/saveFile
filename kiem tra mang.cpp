//#include<iostream>
//#include<cmath>
//using namespace std;
//bool nt(int n)
//{
//	for(int i = 2; i<= sqrt(n);i++)
//	{
//		if(n%i==0)
//			return false;
//	}
//	return n>1;
//}
//int main() {
//	int n; cin>>n;
//	int a[n];
//	for(int &x : a) cin>>x;
//	for(int &y : a) {
//		cout<<y<<" ";
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Nhap n: "; cin>>n;
	if(n<0)
		cout<<"Xin nhap lai";
	if(n>=0 && n%2==1) 
		cout<<n<<"la so chan";
	else
		cout<<n<<"la so le";
}
