#include<iostream>
#include<stdio.h>
#include<math.h>
const int dinhtoida = 20;
using namespace std;
struct DIEM
{
	double x,y;
};
struct DAGIAC
{
	int sodinh;
	DIEM DINH[dinhtoida];
};
void Nhapdagiac(DAGIAC &DG)
{
	do
	{
		cout<<"Nhap so dinh: ";
		cin>>DG.sodinh;
	} while ( DG.sodinh <3);
	for(int i=0; i< DG.sodinh ; i++)
	{
		cout<<"Hoanh do dinh "<<i<<": ";
		cin>>DG.DINH[i].x;
		cout<<"Tung do dinh "<<i<<": ";
		cin>>DG.DINH[i].y;
	}
}
double Khoangcach(DIEM M, DIEM N)
{
	double kq;
	double Dx, Dy;
	Dx = fabs(M.x - N.x);
	Dy = fabs(M.y - N.y);
	kq = sqrt(Dx*Dx + Dy * Dy);
	return kq;
}
int kttinhchat(DAGIAC DG)
{
	int kq = 1;
	double d1, d2;
	for(int i=1; i<= DG.sodinh && kq == 1; i++)
	{
		d1 = Khoangcach(DG.DINH[i-1], DG.DINH[i]);
		d2 = Khoangcach(DG.DINH[i], DG.DINH[(i+1)%DG.sodinh]);
		if( d1 != d2)
			kq = 0;
	}
	return kq;
}
int main()
{
	DAGIAC DG;
	Nhapdagiac(DG);
	if(kttinhchat(DG) == 0)
		cout<<"khong phai da giac deu";
	else
		cout<<"la da giac deu";
}