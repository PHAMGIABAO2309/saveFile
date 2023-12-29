#include<iostream>
#include<math.h>

using namespace std;

long tong(long n) {
	if(n < 10) 
	return n;
		else 
			return ( n%10) + tong(n/10);
	
}
int main() {
	long n;
	cout<<"nhap vao 1 so nguyen lon n= "; cin>>n;
	cout<<"Tong cac chu so cua so"<<n<<"la: "<<tong(n);
	return 1;
}

