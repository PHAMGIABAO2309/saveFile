#include<iostream>
#include<math.h>
using namespace std;
struct DIEM
{
	double x,y;
};
void Nhapdiem(DIEM &D)
{
	cout<<"nhap tung do x: "; cin>>D.x;
	cout<<"Nhap hoanh do y: "; cin>>D.y;
}
void Xuatdiem(DIEM &D)
{
	cout<<"Diem: ("<<D.x<<","<<D.y<<")";
}
DIEM DOIXUNGX(DIEM &A)
{
	DIEM KQ;
	KQ.x = -A.x;
	KQ.y = A.y;
	return KQ;
}
DIEM DOIXUNGY(DIEM &A)
{
	DIEM KQ;
	KQ.x = A.x;
	KQ.y = - A.y;
	return KQ;
}
DIEM DOIXUNGTOADO_O(DIEM &A)
{
	DIEM KQ;
	KQ.x = -A.x;
	KQ.y = -A.y;
	return KQ;
}
DIEM TONG(DIEM &A,DIEM &B)
{
	DIEM KQ;
	KQ.x = A.x + B.x;
	KQ.y = A.y + B.y;
	return KQ;
}
DIEM HIEU(DIEM &A, DIEM &B)
{
	DIEM KQ;
	KQ.x = A.x - B.x;
	KQ.y = A.y - B.y;
	return KQ;
}
DIEM TICH(DIEM &A,DIEM &B)
{
	DIEM KQ;
	KQ.x = A.x * B.x;
	KQ.y = A.y * B.y;
	return KQ;
}
double KHOANGCACH(DIEM &A, DIEM &B)
{
	double KQ;
	KQ = sqrt(pow(B.x - A.x,2) + pow(B.y - A.y,2));
	return KQ;
}
int main()
{
	DIEM A;
	cout<<"Nhap toa do diem A: "<<endl;
	Nhapdiem(A);
	cout<<endl;
	Xuatdiem(A);
	cout<<endl;
	DIEM DOIXUNGHOANHDO = DOIXUNGX(A);
	DIEM DOIXUNGTUNGDO = DOIXUNGY(A);
	DIEM DOIXUNGTOADOTAM = DOIXUNGTOADO_O(A);
	cout<<"Diem doi xung hoanh do A: ("<<DOIXUNGHOANHDO.x<<","<<DOIXUNGHOANHDO.y<<")"<<endl;
	cout<<"Diem doi xung tung do A: ("<<DOIXUNGTUNGDO.x<<","<<DOIXUNGTUNGDO.y<<")"<<endl;
	cout<<"Diem doi xung toa do A: ("<<DOIXUNGTOADOTAM.x<<","<<DOIXUNGTOADOTAM.y<<")"<<endl;
	DIEM B;
	cout<<"\n Nhap toa do diem B: "<<endl;
	Nhapdiem(B);
	cout<<endl;
	Xuatdiem(B);
	cout<<endl;
	DIEM S = TONG(A,B);
	DIEM H = HIEU(A,B);
	DIEM T = TICH(A,B);
	double KC = KHOANGCACH(A,B);
	cout<<"tong 2 diem A & B: ("<<S.x<<","<<S.y<<")"<<endl;
	
	cout<<"hieu 2 diem A & B: ("<<H.x<<","<<H.y<<")"<<endl;
	
	cout<<"tich 2 diem A & B: ("<<T.x<<","<<T.y<<")"<<endl;
	
	cout<<"khoang cach A & B: "<<KC;
}