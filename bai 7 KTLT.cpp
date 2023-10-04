#include <iostream>
using namespace std;
bool Nguyento(int n) {
	if ( n < 2) {
		return false;
	}
	for ( int i = 2; i*i <= n;i++) {
		if(n%i==0) {
			return false;
		}
	}
	return true;
}

int main() {
	int x;
	cout<<"Nhap 1 so nguyen duong x: ";
	cin>>x;
	if(Nguyento(x)) {
		cout<<x<<"la so nguyen to"<<endl;
	}
	else{
		cout<<x<<"khong la so nguyen to"<<endl;
	}
	return 0;
}
