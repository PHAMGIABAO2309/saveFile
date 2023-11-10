/* Gi? s? c� �A GI�C c�c d?nh 'kh�ng tr�ng nhau'
v� 3 d?nh li�n ti?p kh�ng th?ng h�ng */
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
//==========Cau A==========
//Khai b�o h?ng, ki?u, bi?n
const int SO_DINH_TOI_DA=20;
struct DIEM //ki?u c?u tr�c DIEM
{
	double x,y; //ho�nh d? x(s? th?c), tung d? y(s? th?c)
};
struct DAGIAC //ki?u c?u tr�c DAGIAC
{
	int So_dinh; //l� s? lu?ng d?nh c?a �A GI�C, s? nguy�n >= 3
	DIEM Dinh[SO_DINH_TOI_DA]; // 'Dinh' : m?ng 1 chi?u c�c 'DIEM'
};

//=========Cau B=========
//L?p trinhg H�m Nhap_da_giac
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
//L?p tr�nh h�m kho?ng c�ch
double Khoang_cach(DIEM M, DIEM N) //t�nh kho?ng c�ch gi?a 2 di?m M,N
{
	double kq;
	double Dx, Dy;
	Dx = fabs(M.x - N.x);
	Dy = fabs(M.y - N.y);
	kq = sqrt(Dx * Dy + Dy * Dy);
	return kq;
}
//==============Cau D=========
//L?p tr�nh h�m Kiem_tra_tinh_chat
/* Ki?m tra t�nh ch?t "T?t c? c�c c?nh d?u b?ng nhau" c?a �A GI�C dg 
v� tr? v? 1 n?u dg c� t�nh ch?t tr�n, 0 n?u ngu?c l?i */
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
