#include<iostream>
using namespace std;
//ham tinh uoc so chung lon nhat
int timUSCLN ( int a, int b) {
	if ( b==0) {
		return a;
	}
	return timUSCLN(b,a%b);
}
//ham tinh boi so chung nho nhat cua 2 so
int timBSCNN ( int a , int b) {
	int uscln = timUSCLN(a,b);
	return (a*b)/uscln;
}

int main() {
	int a,b;
	cout<<"Nhap vao 2 so nguyen duong a,b: "; cin >>a>>b;
	int bscnn = timBSCNN(a,b);
	cout<<"BOi so chung nho nhat cua" <<a<<"va "<<b<<"la: "<<bscnn<<endl;
	return 0;
}
