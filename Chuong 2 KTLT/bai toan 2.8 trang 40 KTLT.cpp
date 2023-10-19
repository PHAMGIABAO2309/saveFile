#include<iostream>
#define KTNN(x) ( (x)%4==0 && (x)%100!=0 || (x)%400 ==0 )
using namespace std;
struct date
{
	int ngay, thang , nam;
};
int N[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31}
int kthople(date x);
void Nhap(date x);
void Xuat(date x);
date ngaythuong ( date x);
date ngaycuoithang(date x);
date ngaycuoinam(date x);
date timngayhomsau(date x);
int main()
{
	date x, ngayhomsau;
	Nhap(x);
	ngayhomsau = timngayhomsau(x);
	Xuat(ngayhomsau);
}
int kthople(date x)
{
	if(KTNN(x.nam)) N[2]=29;
	if(!(x.nam >= 1)) return 0;
	if(!(x.thang >=1 && x.thang <=12)) return 0;
	if(!(x.ngay >=1 && x.ngay <= N[x.thang])) return 0;
	return 1;
}
void Nhap(date &x)
{
	do
	{
		cout<<"Nhap ngay,thang,nam: "; cin>>&x.ngay>>&x.thang>>&x.nam;
	}
	while(!(kthople(x)));
}
void Xuat(date x)
{
	cout<<"ngay_thang_nam: "<<x.ngay<<x.thang<<x.nam;
}
date ngaythuong(date x)
{
	date kq= { x.ngay + 1,x.thang,x.nam};
	return kq;
}
date ngaycuoithang(date x)
{
	date kq = { 1,1,{x.nam + 1}};
	return kq;
}
date timngayhomsau(date x)
{
	date kq = ngaythuong(x);
	if(x.thang == 12 && x.ngay==31)
		return ngaycuoinam(x);
	if(x.ngay == ( N[x.thang]+ (x.thang == 2 && KTNN(x.nam))))
		return ngaycuoithang(x);
	return kq;
}
