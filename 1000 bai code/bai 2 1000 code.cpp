#include<iostream>
#include<conio.h>
int main() {
	int i ,n;
	long S;
	S=0;
	i=1;
	std::cout<<"NHap n: ";std::cin>>n;
	while(i<=n) {
		S =S + i * i;
		i++;
	}
	std::cout<<"\n i = "<<i<<std::endl;
	std::cout<<"\n 1^2 + 2^2 + ... +"<<n<<"la: "<<S<<std::sendl;
	getch();
	return 0;
}
