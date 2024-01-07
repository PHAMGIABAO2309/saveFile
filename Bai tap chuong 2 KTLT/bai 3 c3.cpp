#include<iostream>
#include<math.h>
using namespace std;
struct DIEM
{
	float x,y;
};
void Nhap(DIEM &M)
{
	cout<<"\nNhap toa do x: "; cin>>M.x;
	cout<<"\nNhap toa do y: "; cin>>M.y;
}
void Xuat(DIEM &M)
{
	cout<<"("<<M.x<<","<<M.y<<")";
}
struct TAMGIAC
{
	DIEM A,B,C;
	float AB, BC, AC;
	float chuvi, dientich;
};

bool KIEMTRATAMGIAC(TAMGIAC &tg)
{
	if (( tg.AB + tg.BC > tg.AC) && ( tg.AB + tg.AC > tg.BC) && ( tg.AC + tg.BC > tg.AB))
		return true;
	return false;
}
void NhapTamGiac(TAMGIAC &tg)
{
	cout<<"Nhap diem A: ";
	Nhap(tg.A);
	cout<<"Nhap diem B: ";
	Nhap(tg.B);
	cout<<"Nhap diem C: ";
	Nhap(tg.C);
}
float TinhDoDai ( DIEM M, DIEM N)
{	
	return sqrt(pow(M.x - N.x,2) + pow(M.y - N.y,2));
}
void DoDai(TAMGIAC &tg)
{
	tg.AB = TinhDoDai( tg.A, tg.B);
	tg.BC = TinhDoDai( tg.B, tg.C);
	tg.AC = TinhDoDai( tg.A, tg.C);
}
void TinhChuViDienTich(TAMGIAC &tg)
{
	
	tg.chuvi  = tg.AB + tg.BC + tg.AC;
	float p = (tg.AB +  tg.BC + tg.AC )/2;
	tg.dientich = sqrt(p*(p - tg.AB) *p* (p -tg.BC) *p* ( p - tg.AC));
}
void XuatTamGiac(TAMGIAC &tg)
{
	cout<<"chu vi: "<<tg.chuvi;
	cout<<"\ndien tich: "<<tg.dientich;
}
int main()
{
	TAMGIAC tg;
	NhapTamGiac(tg);
	DoDai(tg);
	if ( KIEMTRATAMGIAC (tg))
	{
		TinhChuViDienTich(tg);
		XuatTamGiac(tg);
	}
		
}

