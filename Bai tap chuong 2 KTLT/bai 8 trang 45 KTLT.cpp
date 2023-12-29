#include<iostream>
using namespace std;
int phepchianguyen(int a, int b)
{
	if(b==0)
	{
		cout<<"Loi: chia cho 0";
		return -1;
	}
	int kq = 0;
	int du = a;
	while ( du >= b)
	{
		du = du - b;
		kq++;	
	}
	return kq;
}
int main()
{
	int a,  b;
	cout<<"Nhap so a: "; cin>>a;
	cout<<"Nhap so b: "; cin>>b;
	int kq = phepchianguyen(a,b);
	if(kq != -1 )
	{
		cout<<"Ket qua cua phep chia nguyen: "<<kq;
	}
	return 0;
}