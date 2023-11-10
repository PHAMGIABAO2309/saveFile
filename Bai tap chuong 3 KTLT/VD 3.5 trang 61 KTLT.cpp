/* Gi? s? có ÐA GIÁC các d?nh 'không trùng nhau'
và 3 d?nh liên ti?p không th?ng hàng */
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
//==========Cau A==========
//Khai báo h?ng, ki?u, bi?n
const int SO_DINH_TOI_DA=20;
struct DIEM //ki?u c?u trúc DIEM
{
	double x,y; //hoành d? x(s? th?c), tung d? y(s? th?c)
};
struct DAGIAC //ki?u c?u trúc DAGIAC
{
	int So_dinh; //là s? lu?ng d?nh c?a ÐA GIÁC, s? nguyên >= 3
	DIEM Dinh[SO_DINH_TOI_DA]; // 'Dinh' : m?ng 1 chi?u các 'DIEM'
};

//=========Cau B=========
//L?p trinhg Hàm Nhap_da_giac
void Nhap_da_giac(DAGIAC &dg)
{
	do
	{
		cout<<"\n So dinh: "; cin>>dg.So_dinh;
	}
	while(dg.So_dinh < 3);
	for(int i = 0; i< dg.So_dinh; i++)
	{
		cout<<"\n Hoanh do dinh "<<i+1<<": ";
		cin>>dg.Dinh[i].x;
		cout<<"\n Tung do dinh "<<i+1<<" : ";
		cin>>dg.Dinh[i].y;
	}
}
//==============Cau C=========
//L?p trình hàm kho?ng cách
double Khoang_cach(DIEM M, DIEM N) //tính kho?ng cách gi?a 2 di?m M,N
{
	double kq;
	double Dx, Dy;
	Dx = fabs(M.x - N.x);
	Dy = fabs(M.y - N.y);
	kq = sqrt(Dx * Dy + Dy * Dy);
	return kq;
}
//==============Cau D=========
//L?p trình hàm Kiem_tra_tinh_chat
/* Ki?m tra tính ch?t "T?t c? các c?nh d?u b?ng nhau" c?a ÐA GIÁC dg 
và tr? v? 1 n?u dg có tính ch?t trên, 0 n?u ngu?c l?i */
int Kiem_tra_tinh_chat(DAGIAC dg) 
{
	int kq = 1;
	double d1, d2;
	for(int i = 1; i<= dg.So_dinh && kq ==1; i++)
	{
		d1 = Khoang_cach(dg.Dinh[i-1],dg.Dinh[i]);
		d2 = Khoang_cach(dg.Dinh[i], dg.Dinh[(i+1) % dg.So_dinh]);
		if(d1 != d2)
			kq = 0;
	}
	return kq;
}

int main()
{
	DAGIAC dg;
	Nhap_da_giac(dg);
	if(Kiem_tra_tinh_chat(dg)==0)
		cout<<"\n khong la da giac deu";
	else
		cout<<"\n la da giac deu";
}
