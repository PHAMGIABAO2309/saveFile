#include<iostream>
#include<iomanip>
using namespace std;
float tinhvontichluy ( float  p, int n, float  r)
{
	cout<<setw(50)<<"\nNam"<<setw(15)<<"Von";
	for(int i=1; i<=n; ++i)
	{
		p = p * ( 1 + r);
		cout<<setw(50)<<"\n"<<i <<setw(15)<<fixed<<setprecision(1)<<p<<endl;
	}
	return p;
}
int main()
{
	float  p, r;
	int n;
	cout<<"Nhap lai suat nam ( r ): "; cin>>r;
	cout<<"Nhap so von ban dau (p): "; cin>>p;
	cout<<"Nhap so nam ( n): "; cin>>n;
	cout<<"\n==================================";
	cout<<"\nLai suat: "<<fixed<<setprecision(1)<<r*100<<"%";
	cout<<"\nVon ban dau: "<<p;
	cout<<"\nThoi han: "<<n<<" nam";
	float vontichluy = tinhvontichluy(p,n,r);
	cout<<"\nvon tich luy sau "<<n<<" nam la: "<<vontichluy;
}