#include<iostream>
using namespace std;

//ham tinh gia tri x mu n
double kt_x_mu_n ( double x,long n) //x la so thuc, n la so nguyen khong am
{
	double result = 1;
	while ( n -- ) // bien n giam 1 don vi. qua trinh nay se tiep tuc cho den khi n tro thanh 0
	{
		result = result*x;
	}
	return result;
}
double kt_x_mu_n2 ( double x, long n)
{
	double result = 1;
	while(n)
	{
		// neu n lay du cho 2 ( n%2 == 1 ), tuc la n la so le thi nhan gia tri result voi x
		if ( n%2 == 1) 
		{
			result = result * x;
		}
		x = x*x;
		n = n/2; // chia n cho 2 va luu vao ket qua n
	}
	return result;
}

int main() 
{
	double x;
	long n;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap n= "; cin>>n;
	double z;
	z = kt_x_mu_n2(x,n);
	cout<<" result x_mu_n: "<<z;
	return 0;
}

	

