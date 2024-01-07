#include<iostream>
#include<math.h>
using namespace std;
//tinh s(n) = 1 + 2 + 3 + .. + n-1 + n
int bai1(int n)
{
	if( n == 0)
		return 0;
	return bai1(n-1) + n;
}
//tinh s(n) = 1 +1/2 + 1/3 + .. + 1/n
double bai2(int n)
{
	if( n == 0)
		return 0;
	return bai2(n-1) + 1.0/n;
}
//tinh s(n) = 1/2 + 3/4 + 5/6 + ... + (2n+1)/(2n+2)
double bai3(int n)
{
	if( n == 0 )
		return 0.5;
	return bai3(n-1) + (2.0*n+1)/(2.0*n+2);
}
// tinh T(x,n) = x*n
int bai4(int x, int n)
{
	if( n==0)
		return 0;
	return bai4(x,n-1) + x;
}
//tim uoc so le lon nhat
int bai5(int n)
{
	if(n%2 != 0)
		return n;
	return bai5(n/2);
}
//dem so luong chu so 
int bai6(int n)
{
	if(n==0)
		return 0;
	return bai6(n/10) +1;
}
//tinh s(x,n) = x*2 + x*4 + x*6 + .. +x*2*n
int bai7(int x, int n)
{
	if(n==0)
		return x*2;
	return x * (2 * n) + bai7(x,n-1);
}
//dem so luong chu so le
int bai8(int n)
{
	if(n==0)
		return 0;
	int tam = n%10;
	if( tam %2 == 1)
		return bai8(n/10) +1;
	return bai8(n/10);
}
//viet ham nhap mang 1 chieu
void bai9(int a[], int n,int i=0)
{
	if( i == n)
		return;
	cout<<"Nhap phan tu thu ["<<i<<"]: ";
	cin>>a[i];
	bai9(a,n,i+1);
}
//viet ham xuat mang 1 chieu
void bai10(int a[], int n)
{
	if(n==0)
		return;
	bai10(a,n-1);
	cout<<a[n-1]<<" ";
}
//tinh tong phan tu chan
int bai11(int a[], int n, int i=0)
{
	if(i >= n)
		return 0;
	if( a[i] %2 == 0)
		return a[i] + bai11(a,n,i+1);
	return bai11(a,n,i+1);
}
//tinh tong cac phan tu nguyen to
bool ktnt(int n)
{
	if ( n<=1)
		return false;
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int bai12(int a[], int n, int i=0)
{
	if( i>=n)
		return 0;
	if(ktnt(a[i]))
	{
		return a[i] + bai12(a,n,i+1);
	}
	else
	{
		return bai12(a,n,i+1);
	}	
}
//tim phan tu nguyen to dau tien co trong mang
int bai13(int a[], int n, int i=0)
{
	if(i>=n)
		return -1;
	if(ktnt(a[i]) )
		return a[i];
	return bai13(a,n,i+1);
}
//tim phan tu chinh phuong cuoi cung
bool ktcp(int n)
{
	int c = sqrt(n);
	return c*c == n;
}
int bai14(int a[], int n,int i=0, int cpcuoicung = -1)
{
	if( i>= n)
		return cpcuoicung;
	if(ktcp(a[i]))
		cpcuoicung = a[i];
	return bai14(a,n,i+1,cpcuoicung);
}
//tim phan tu chan dau tien
int bai15(int a[], int n,int i=0)
{
	if(i>=n)
		return -1;
	if(a[i]%2==0)
		return a[i];
	return bai15(a,n,i+1);
}
//tim phan tu lon nhat trong mang
int bai16(int a[], int n, int i=0, int max = INT_MIN)
{
	if( i>=n)
		return max;
	if(a[i] > max)
		max = a[i];
	return bai16(a,n,i+1,max);
}
//dem so phan tu chan co trong mang
int bai17(int a[], int n,int i=0, int dem = 0)
{
	if(i>=n)
		return dem;
	if( a[i]%2==0)
		dem++;
	return bai17(a,n,i+1,dem);
}
//dem so phan tu co gia tri la x co trong mang
int bai18(int a[], int n, int x, int i=0, int dem = 0)
{
	if(i>=n)
		return dem;
	if(a[i]==x)
		dem++;
	return bai18(a,n,x,i+1,dem);
}
//in ra vi tri cua phan tu lon nhat dau tien co trong mang
int bai19(int a[], int n, int i=0, int max = INT_MIN, int vitri = -1)
{
	if(i>=n)
		return vitri;
	if(a[i]>max)
		max=a[i];
		vitri = i;
	return bai19(a,n,i+1,max,vitri);
}
int main()
{
	int n;
	int a[100];
	cout<<"Nhap n: "; cin>>n;
	//cout<<"tong: "<<bai8(n);
	bai9(a,n);
	bai10(a,n);
	int kq = bai19(a,n);
	cout<<"kq: "<<kq;
}