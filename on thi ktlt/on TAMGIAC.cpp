#include<iostream>
#include<math.h>
using namespace std;
struct DIEM
{
	float x,y;
};
void Nhap(DIEM &D)
{
	cout<<"\nNhap tung do x: ";
	cin>>D.x;
	cout<<"Nhap hoanh do y: ";
	cin>>D.y;
}
void Xuat(DIEM &D)
{
	cout<<"( "<<D.x<<","<<D.y<<" )";
}
struct TAMGIAC
{
	DIEM A,B,C;
	float AB,AC,BC;
	float CHUVI, DIENTICH;
};
bool KIEMTRATAMGIAC(TAMGIAC &TG)
{
	if ( (TG.AB + TG.AC > TG.BC)&&(TG.AB+TG.BC>TG.AC)&&(TG.AC+TG.BC>TG.AB))
		return true;
	return false;
}
void NHAPTAMGIAC(TAMGIAC &TG)
{
	cout<<"Nhap diem A: ";
	Nhap(TG.A);
	cout<<"Nhap diem B: ";
	Nhap(TG.B);
	cout<<"Nhap diem C: ";
	Nhap(TG.C);
}
int TINHDODAI(DIEM DAU, DIEM CUOI)
{
	return sqrt(pow(DAU.x - CUOI.x,2)+pow(DAU.y - CUOI.y,2));
}
void DODAI(TAMGIAC &TG)
{
	TG.AB = TINHDODAI(TG.A, TG.B);
	TG.AC = TINHDODAI(TG.A, TG.C);
	TG.BC = TINHDODAI(TG.B, TG.C);
}

void TINHCHUVI(TAMGIAC &TG)
{
	TG.CHUVI = TG.AB + TG.AC + TG.BC;
}
void TINHDIENTICH(TAMGIAC &TG)
{
	float P = ( TG.AB + TG.AC + TG.BC)/2;
	TG.DIENTICH = sqrt(P*(P-TG.AB)*(P - TG.AC)*(P-TG.BC));
}
DIEM TRONGTAMTAMGIAC(TAMGIAC &TG)
{
	DIEM TRONGTAM;
	TRONGTAM.x = ( TG.A.x + TG.B.x + TG.C.x)/3;
	TRONGTAM.y = ( TG.A.y + TG.B.y + TG.C.y)/3;
	return TRONGTAM;
}
void XUATTAMGIAC(TAMGIAC &TG)
{
	cout<<"Chu vi: "<<TG.CHUVI;
	cout<<"\n Dien tich: "<<TG.DIENTICH;
}
void XUATTRONGTAM(DIEM TRONGTAM)
{
	cout<<"\n Trong tam: ("<<TRONGTAM.x<<","<<TRONGTAM.y<<")";
}
bool KIEMTRADIEM(float x, float y,TAMGIAC &G)
{
	TAMGIAC G1={TG.A,TG.B,x,y};
	TAMGIAC G2={TG.A,x,y,TG.C};
	TAMGIAC G3={x,y,TG.B,TG.C};
	float DIENTICHG = TINHDIENTICH(G);
	float DIENTICHG1 = TINHDIENTICH(G1);
	float DIENTICHG2 = TINHDIENTICH(G2);
	float DIENTICHG3 = TINHDIENTICH(G3);
	float saiso = 1e-6;
	return abs(DIENTICHG == (DIENTICHG1 + DIENTICHG2 + DIENTICHG3)) < saiso;
}
int main()
{
	TAMGIAC TG;
	NHAPTAMGIAC (TG);
	DODAI(TG);
	if(KIEMTRATAMGIAC(TG))
	{
		TINHCHUVI(TG);
		TINHDIENTICH(TG);
		XUATTAMGIAC(TG);
		DIEM TRONGTAM = TRONGTAMTAMGIAC(TG);
		XUATTRONGTAM(TRONGTAM);
		if(KIEMTRADIEM(x,y,TG))
		{
			cout<<"Toa do nam trong tam giac";
		}
		else
		{
			cout<<"Toa do khong nam trong tam giac";
		}
	}
	else
	{
		cout<<"khong phai la tam giac";
	}
}
