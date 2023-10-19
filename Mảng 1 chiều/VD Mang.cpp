////#include<iostream>
////using namespace std;
////int main () {
////	int a[6] = {6 ,5 ,4, 3,2,1};
////	cout<<a[2]<<endl;
////	return 0;
////}
//
//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	cin>>n;
//	int a[n];
//	for ( int i = 0; i<n; i++) {
//		cin>>a[i]; // nhap gia tri cho phan tu o chi so i
//	}
//	int sum =0;
//	for ( int i = 0; i<n; i++)
//	{
//		sum = sum + a[i];
//	}
//	cout<<"tong la: "<<sum;
//	return 0;
//	
//}

#include<iostream>
using namespace std;
int main() {
	int a;
	int sum = 0;
	for(int i = 0; i < 10 ; i++)
	{
		cin>>a;
		sum = sum +a ;
	}
	cout<<sum;
}
