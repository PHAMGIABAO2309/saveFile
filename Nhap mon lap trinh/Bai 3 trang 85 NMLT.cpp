#include<iostream>
using namespace std;

//ham tinh giai thua
int giaithua(int n)
{
	if(n==0 || n ==1)
		return 1;
	else
		return n*giaithua(n-1);
}

//ham tinh to hop chap k cua n
int tohopchapk(int n, int k)
{
	int tuso = giaithua(n);
	int mauso = giaithua(n) * giaithua(n-k);
	return tuso/mauso;
}
//ham in tam giac pascal
void tamgiacpascal(int n)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<tohopchapk(i,j)<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n,k;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap k: "; cin>>k;
	// tinh giai thua cua n va to hop chap k cua n
	cout<<"\ngiai thua n: "<<giaithua(n);
	cout<<"\nto hop chap k: "<<tohopchapk(n,k);
	cout<<"\ntam giac pascal: \n";
	tamgiacpascal(n);
}
