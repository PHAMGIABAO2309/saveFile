#include<iostream>
#include<math.h>
using namespace std;
const int PI = 3.14;
struct DUONGTRON
{
	double x,y;
	double r;
};
void NHAP(DUONGTRON &O)
{
	cout<<"Nhap vao tung do x: ";
	cin>>O.x;
	cout<<"Nhap vao hoanh do y: ";
	cin>>O.y;
	cout<<"Nhap vao ban kinh r: ";
	cin>>O.r;
}
void XUAT(DUONGTRON &O)
{
	cout<<"Duong tron tam O: ("<<O.x<<","<<O.y<<")";
	cout<<"\n ban kinh r: "<<O.r;
}
//TINH CHU VI DUONG TRON C=2*pi*r
double TINHCHUVI(DUONGTRON O)
{
	double CHUVI = 2*PI*O.r;
	return CHUVI;
}
//TINH DIEN TICH DUONGTRON S = PI * R^2
double TINHDIENTICH(DUONGTRON O)
{
	double DIENTICH = PI *pow(O.r,2);
	return DIENTICH;
}
void XUATDUONGTRON(double CHUVI, double DIENTICH)
{
	cout<<"chu vi: "<<CHUVI;
	cout<<"\n dien tich: "<<DIENTICH;
}
bool KIEMTRATOADODIEM(double x, double y, DUONGTRON O)
{
	double DODAI = sqrt(pow(x - O.x,2) + pow(y - O.y,2));
	return DODAI;
}
int main()
{
	DUONGTRON O;
	NHAP(O);
	double CHUVI = TINHCHUVI(O);
	double DIENTICH = TINHDIENTICH(O);
	XUATDUONGTRON(CHUVI,DIENTICH);
		
	double x,y;
	cin>>x>>y;
	if( KIEMTRATOADODIEM(x,y,O))
	{
		cout<<"toa do nam trong duong tron tam O";
		
	}
	else
		cout<<"Toa do khong nam trong duong tron tam O";
	
}
