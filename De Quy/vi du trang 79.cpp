#include<iostream>
using namespace std;
//--vidu 4.1 trang 78
long tong(int n)
{
	if(n==0)
		return 0;
	return tong(n-1) + n;
}
//--vidu 4.2 trang 79
long giaithua(int n)
{
	if ( n==0)
		return 1;
	return n*giaithua(n-1);
}
//--vidu 4.3 trang 79
float tongsochan(int a[], int n)
{
	if(n==0)
		return 0;
	if( a[n-1]%2 == 0)
		return tongsochan(a,n-1) + a[n-1];
	return tongsochan(a,n-1);
}
//--vidu 4.4 trang 79
int demduong(int a[], int n)
{
	if( n==0)
		return 0;
	if ( a[n-1] <= 0 )
		return demduong(a,n-1);
	return 1 + demduong(a,n-1);
}
//--vidu 4.5 trang 80
long fibo(int n)
{
	if( n <= 1)
		return n;
	return fibo(n-1) + fibo(n-2);
}
//--vidu 4.6 trang 81
float tinhxn(float x, int n)
{
	if( n== 0)
		return 0;
	if(n==1)
		return x;
	return (1+x/n) * tinhxn(x,n-1) - (x/n) * tinhxn(x,n-2);
} 
//--vidu 4.7 trang 82
long tongyn(int n);
long tongxn(int n)
{
	if(n==0)
		return 1;
	return tongxn(n-1) + tongyn(n-1);
}
long tongyn(int n)
{
	if(n==0)
		return 0;
	return 3*tongxn(n-1) + 2*tongyn(n-1);
}
//--vidu 4.8 trang 82
long tinhxn2(int n)
{
	if ( n== 0)
		return 1;
	long s =0;
	for(int i=0; i<n; i++)
	{
		s = s + i*i*tinhxn2(n-1);
	}
	return s;
}
//4.10 trang 84
double tinhtien(int n)
{
	if(n==0)
		return 1000;
	else
		return 1.12 * tinhtien(n-1);
}
//4.13 trang 85
int demphanbiet(int a[], int n)
{
	if ( n<1) return 0;
	if( n == 1 ) return 1;
	int dem = demphanbiet(a,n-1);
	int flag = 1;
	for(int i=0; i<n; i++)
	{
		if(a[i] == a[n-1])
			flag = 0;
	}
	if ( flag == 1)
		dem++;
	return dem;
}
void nhap(int a[], int n,int i=0)
{
	if( i == n)
		return;
	cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
	cin>>a[i];
	nhap(a,n,i+1);
}
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	int x;
	cout<<"Nhap x: "; cin>>x;
	
	int a[n];
	nhap(a,n);
	cout<<"\n Tong cua n: "<<tong(n);
	cout<<"\n Giai thua cua n: "<<giaithua(n);
	cout<<"\n Tong so chan: "<<tongsochan(a,n);
	cout<<"\n So luong so duong trong mang: "<<demduong(a,n);
	cout<<"\n Tong Fibo cua n: "<<fibo(n);
	cout<<"\n Tong x voi n: "<<tinhxn(x,n);
	cout<<"\n Tinh x voi n: "<<tongxn(n)<<" va tinh y voi n: "<<tongyn(n);
	cout<<"\n Tinh x voi n cua vidu 4.8: "<<tinhxn2(n);
	cout<<"\n Tinh tien n: "<<tinhtien(n);
	cout<<"\n Dem phan biet cua mang: "<<demphanbiet(a,n);
}