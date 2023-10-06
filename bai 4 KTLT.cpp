#include<iostream>
using namespace std;
int demsouocchan(int n) {
	int dem = 0;
	for(int i = 1; i<= n; i++) {
		if(n % i == 0 && i %2 == 0) {
			dem++;
		}
	}
	return dem;
}

int main() {
	int a;
	cout<<"Nhap so nguyen duong n: "; cin>>a;
	int soluonguocsochan = demsouocchan(a);
	cout<<"So luong uoc so chan cua "<<a<<"la: "<<soluonguocsochan<<endl;
	return 0;
}
