#include<iostream>
using namespace std;
int N[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
struct DATE
{
	int day, month, year;
};
//kt nam nhuan
int ktnamnhuan(DATE &x)
{
	return ( (x.year % 4 == 0) && (x.year%100 != 0 || x.year%400 == 0));
}
int kthople(DATE &x)
{
	if(ktnamnhuan(x))
	{
		N[2] = 28;
		if( !(x.day>=1 && x.day <= N[x.month]))
		{
			return 0;
		}
		if ( !(x.month >=1 && x.month <= 12))
		{
			return 0;
		}
	}
	return 1;
}
void Nhap(DATE &x)
{
	do
	{
		cout<<"Nhap ngay: "; cin>>x.day;
		cout<<"\n Nhap thang: "; cin>>x.month;
		cout<<"\n Nhap nam: "; cin>>x.year;
	} while ( !(kthople(x)) );
}
void Xuat(DATE &x)
{
	cout<<x.day<<"/"<<x.month<<"/"<<x.year;
}
DATE NGAYTHUONG(DATE x)
{
	DATE KQ;
	if( x.day > 1 )
		KQ = { x.day - 1,x.month,x.year};
		return KQ;
}
DATE NGAYDAUTHANG(DATE x)
{
	DATE KQ;
	if(x.month > 1)
		KQ = { N[x.month - 1],x.month -1,x.year};
		return KQ;
}
DATE NGAYDAUNAM(DATE x)
{
	DATE KQ = { N[12],12,x.year -1};
	return KQ;
}
DATE TIMNGAYHOMTRUOC(DATE x)
{
	if ( ( x.day == 1) && (x.month == 1) )
	{
		return NGAYDAUNAM(x);
	}
	if ( x.day == 1)
	{
		return NGAYDAUTHANG(x);
	}
	else
	{
		return NGAYTHUONG(x);
	}
}
int main()
{
	DATE x;
	DATE NGAYHOMTRUOC;
	Nhap(x);
	Xuat(x);
	cout<<"\n";
	ktnamnhuan(x);
	NGAYHOMTRUOC = TIMNGAYHOMTRUOC(x);
	Xuat(NGAYHOMTRUOC);
}