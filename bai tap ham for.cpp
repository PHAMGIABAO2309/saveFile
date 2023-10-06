//so nguyen to la so >1 & chi chia het cho 1 va chinh no.so 2 la so nguyen to chan duy nhat
//#include<iostream>
//using namespace std;
//int main() 
//{
//////	int n;
//////	bool kt = true;
//////	cout<<"Nhap n: "; cin>>n;
//////	if( n < 2 || n%2 == 0)
//////	{
//////		kt = false;
//////	}
//////	else if ( n == 2)
//////	{
//////		kt = true;
//////	}
//////	else
//////	{
//////		for(int i = 3; i<n;i=i+2)
//////		{
//////			if(n%i == 0)
//////			{
//////				kt = false;
//////				break;
//////			}
//////		}
//////	}
//////	if(kt)
//////	{
//////		cout<<n<<"la so nguyen to";
//////	}
//////	else
//////		cout<<n<<"khong la so nguyen to";
//////	return 0;
//////}


//////ap dung thuat toan tren, in cac SNT nam trong khoang tu 1 den 100
////#include <iostream>
////using namespace std;
//// 
////int main()
////{
////    // Bien dung check SNT
////    bool flag;  
//// 
////    for (int i = 1; i <= 100; i++){
//// 
////        // Khoi tao gia tri ban dau cho flag
////        flag = true;
//// 
////        // Neu i < 2 thi khong phai la SNT
////        if (i < 2){
////            flag = false;
////        }
////        // Neu n = 2 thi do la SNT
////        else if (i == 2){
////            flag = true;
////        }
////        // Neu n la so chan thi khong phai la SNT
////        else if (i % 2 == 0){
////            flag = false;
////        }
////        else{
////            // Lap qua cac so 3, 5, 7 ... (n - 1)
////            // Neu n chia het cho bat ki so nao thi 
////            // do khong phai la SNT
////            for (int j = 3; j < i; j += 2){
////                if (i % j == 0){
////                    flag = false;
////                    break;
////                }
////            }
////        }
//// 
////        // neu la SNT thi in ra
////        if (flag){
////            cout << i << endl;
////        }
////    }
////}



////viet chuong trinh tinh giai thua cho  1 so bat ki
//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	cout<<"Nhap giai thua can tinh: "; cin>>n;
//	int factorial = 1;
//	if(n<0)
//		cout<<"xin vui long nhap so duong";
//	else if ( n == 0)
//		factorial = 1;
//	else
//	for(int i = 1;i<=n; i++)
//	{
//		factorial = factorial * i;
//	}
//	if(factorial ) {
//		cout<<n<<"!= "<<factorial;
//	}
//}

//viet chuong trinh cho phep nguoi dung nhap vao 1 day so gom 10 chu so
#include<iostream>
using namespace std;
int main() {
	int numbers[10];
	for(int i = 0; i<10;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<":   ";
		cin>>numbers[i];
}
for(int i = 0; i<10;i++)
{
	cout<<numbers[i]<<",";
}
}
