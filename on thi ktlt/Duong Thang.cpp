#include<iostream>
#include<math.h>
using namespace std;
struct Diem
{
	double x,y;
};
void Nhap(Diem &M)
{
	cout<<"Nhap toa do x: "; cin>>M.x;
	cout<<"Nhap toa do y: "; cin>>M.y;
}
void Xuat(Diem &M)
{
	cout<<"( "<<M.x<<","<<M.y<<")";
}
struct DuongThang
{
	float A,B,C;
};
void NhapDT(DuongThang &D)
{
	cout<<"Nhap diem A: "; cin>>D.A;
	cout<<"Nhap diem B: "; cin>>D.B;
	cout<<"Nhap diem C: "; cin>>D.C;
}
DuongThang TaoDuongThangVuongGoc(Diem M,DuongThang D )
{
	DuongThang kq;
	kq.A = - kq.B;
	kq.B = kq.A;
	kq.C = kq.B * M.x - kq.A * M.y;
	return kq;
}
Diem GiaoDiem(DuongThang D, DuongThang D1)
{
	Diem kq;
	float delta = D.A * D1.B + D.B * D1.A;
	float deltax = D.B * D1.C + D.C * D1.B;
	float deltay = D.A * D1.C + D.C * D1.A;
	return kq;
}
int main()
{
	Diem M;
	Diem H;
	DuongThang D, D1;
	Nhap(M);
	NhapDT(D);
	D1 = TaoDuongThangVuongGoc(M,D);
	H = GiaoDiem(D,D1);
	Xuat(H);
}