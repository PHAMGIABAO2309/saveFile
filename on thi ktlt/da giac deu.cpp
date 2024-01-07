/****************************************************
Nhap da giac toi da 20 dinh
Kiem tra da giac deu
Tinh chu vi

VD1: Da giac: 3 dinh: A(0,1) B(1,0) C(0,0)
-> Ket qua: "Khong phai da giac deu", Chu vi: 3.41421
VD2: Da giac: 4 dinh: A(0,1) B(1,1) C(1,0) D(0,0)
-> Ket qua: "Da giac deu", Chu vi: 4
****************************************************/
#include<iostream>
#include<math.h>
#define N 20
using namespace std;
struct DIEM
{
	float x,y;
};
struct DAGIAC
{
	int sodinh;
	DIEM dinh[N];
};
void Nhapdiem(DIEM &X);
void Nhapdagiac(DAGIAC &X);
float Dodai(DIEM A, DIEM B);
int ktdagiacdeu(DAGIAC X);
float Tinhchuvi(DAGIAC X);
void Nhapdiem(DIEM &X)
{
	cout<<"Nhap x: "; cin>>X.x;
	cout<<"Nhap y: "; cin>>X.y;
}
void Nhapdagiac(DAGIAC &X)
{
	do
	{
		cout<<"Nhap so dinh: ";
		cin>>X.sodinh;
	} while ( !(X.sodinh >= 3 && X.sodinh <= 20));
	for(int i=0; i<X.sodinh; i++)
	{
		Nhapdiem(X.dinh[i]);
	}
}
float Dodai(DIEM A, DIEM B)
{
	float x,y;
	x = B.x - A.x;
	y = B.y - A.y;
	return float(sqrt(x*x + y*y));
}
int ktdagiacdeu(DAGIAC X)
{
	float l1, l2;
	for(int i=0; i< X.sodinh - 1; i++)
	{
		l1 = Dodai( X.dinh[i], X.dinh[i+1]);
		l2 = Dodai( X.dinh[i+1], X.dinh[(i+2)%(X.sodinh)]);
		if( l1 != l2)
		{
			return 0;
		}
	}
	return 1;
}
float Tinhchuvi(DAGIAC X)
{
	float kq = 0;
	for(int i=0; i< X.sodinh; i++)
	{
		kq += Dodai(X.dinh[i], X.dinh[(i+1)%X.sodinh]);
	}
	return kq;
}
int main()
{
	DAGIAC X;
	float cv;
	Nhapdagiac(X);
	if(ktdagiacdeu(X))
	{
		cout<<"Da giac deu";
	}
	else
	{
		cout<<"khong phai da giac deu";
	}
	cv  = Tinhchuvi(X);
	cout<<"\nchu vi: "<<cv;
}