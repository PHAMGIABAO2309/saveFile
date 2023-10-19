#include<iostream>
using namespace std;
int main() {
	int i,n;
	float S = 0;
	do {
		cout<<"Nhap : ";cin>>n;
		if ( n < 1) {
			cout<<"N phai lon hon hoac bang 1. xin vui long nhap lai"; 
		}
			
	}
	while ( n < 1);
	for ( i = 1;i<=n; i++) {
		S += 1.0/(2*i);
	}
	cout<<"Tong la: "<<S<<endl;
	return 0;
	}
