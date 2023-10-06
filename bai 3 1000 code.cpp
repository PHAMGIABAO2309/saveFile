#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int i,n;
	float S;
	S =0;
	i = 1;
	do {
		cout<<"Nhap N: ";cin>>n;
		if(n<1) {
			cout<<"\n N phai lon hon hoac bang 1.XIn nhap lai!";
		}
	}
	while(n<1);
	while(i<=n) {
		S=S + 1.0/i;
		i++;
	}
	cout<<"i= "<<i<<endl;
	cout<<"S = "<<S<<endl;
	cout<<"Tong 1 + 1/2 +...+"<<n<<"la: "<<S<<endl;
	getch();
	return 0;
}
