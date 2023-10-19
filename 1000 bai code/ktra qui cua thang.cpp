#include<iostream>
using namespace std;
int main()
{
	int thang;
	cout<<"Nhap thang: "; cin>>thang;
	switch(thang)
	{
		case 1:
		case 2:
		case 3:
			cout<<"Qui mot";
			break;
		case 4:
		case 5:
		case 6:
			cout<<"Qui hai";
			break;
		case 7:
		case 8:
		case 9:
			cout<<"Qui ba";
			break;
		case 10:
		case 11:
		case 12:
			cout<<"Qui bon";
			break;
	}
}
