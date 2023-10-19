#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,k;
	cout<<"Nhap so nguyen duong n: "; cin>>n;
	cout<<"Nhap chu so k: "; cin>>k;
	int sodau = n/pow(10,k-1);
	cout<<"Chu so dau tien cua"<<n<<"gom "<<k<<"chu so la: "<<sodau<<endl;
	return 0;
}
