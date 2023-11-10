#include<iostream>
#include<cmath>
using namespace std;
struct diem
{
	float x,y;
};
struct duongthang
{
	float a,b,c;
};
diem M; // bien nhap lieu
duongthang D; //bien nhap lieu
duongthang D1; //trung gian
diem H; //ket qua

void nhapdiem(diem &M)
{
	cout<<"Nhap toa do x: "; cin>>M.x;
	cout<<"Nhap toa do y: "; cin>>M.y;
}
void nhapduongthang( duongthang &D)
{
	do
	{
		cout<<"He so a: "; cin>>D.a;
		cout<<"He so b: "; cin>>D.b;
		cout<<"He so c: "; cin>>D.c;
	}
	while ( D.a*D.a + D.b*D.b <= 0);
}

duongthang taoduongvuonggoc( diem M,duongthang D)
{
	duongthang kq;
	kq.a = -D.b;
	kq.b = D.a;
	kq.c = kq.b*M.x - kq.a *M.y;
	return kq;
}
diem xacdinhgiaodiem(duongthang D1, duongthang D)
{
	diem kq;
	float delta,deltax,deltay;
	delta = D.a * D1.b - D.b*D1.a;
	deltax = D.b * D1.c - D1.b*D.c;
	deltay = D1.a*D.c - D1.c*D.a;
	kq.x = deltax/delta;
	kq.y = deltay/delta;
	return kq;
}
void xuatdiem(diem M)
{
	cout<<"Toa do hinh chieu cua diem M len duong thang(D) la: H< "<<M.x<<"  "<<M.y<<" >";
}
int main()
{
	diem M;
	duongthang D;
	diem H;
	duongthang D1;
	nhapdiem(M);
	nhapduongthang(D);
	D1 = taoduongvuonggoc(M,D);
	H = xacdinhgiaodiem(D1,D);
	xuatdiem(H);
}
