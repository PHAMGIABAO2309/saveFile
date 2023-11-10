#include<iostream>
using namespace std;
bool ktdoixung(int n)
{
	int sodaonguoc =0;
	int tam = n;
	while(tam > 0)
	{
		sodaonguoc = sodaonguoc * 10 + tam % 10;
		tam /= 10;
	}
	return n == sodaonguoc;
}
float ktsothucdoixungkhong(float a[],int n)
{
	float flag = 0;
	for(int i =0; i<n; i++)
	{
		if(ktdoixung(a[i]))
		{
			flag = 1;
			break;
		}
	}
	cout<<flag;
}
void Nhap(float a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	float a[n];
	Nhap(a,n);
	ktsothucdoixungkhong(a,n);
}