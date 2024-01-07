#include <iostream>
using namespace std;


int N[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
struct date
{	
	int ngay;int thang;int nam;
};


//Ham Kiem Tra Nam Nhuan
int KTNN(date x)
{
	if((x.nam%4 == 0) && (x.nam%100!=0 || x.nam%400==0))
	{
		x.nam+=1;
		return 1;	
	}
	return 0;
}
//Ham Kiem Tra Hop Le
int KTHL(date x)
{
	if(KTNN(x))
		N[2] = 29;
	if(!(x.ngay >=1 && x.ngay <= N[x.thang]))
		return 0;
	if(!(x.thang >=1 && (x.thang <=12)))
		return 0;
	return 1;
}
//Ham Nhap
void Nhap(date &x)
{
	do{
		cout << "Nhap DD/MM/YYYY:\n";
		cout << "Day:"; cin >> x.ngay;
		cout << "Month:"; cin >> x.thang;
		cout << "Year:"; cin >> x.nam;
	}while(!KTHL(x));
}
//Ham Xuat
void Xuat(date x)
{
	string strngay = to_string(x.ngay);
	if(strngay.size() == 1)
		strngay = '0' + strngay;
	string strthang = to_string(x.thang);
	if(strthang.size() ==1)
		strthang = '0' + strthang;	
	cout << "Ngay Vua Nhap: " << strngay << "/" << strthang << "/" << x.nam;
}

void XuatNgayHomTruoc(date x)
{
	string strngay = to_string(x.ngay);
	if(strngay.size() == 1)
		strngay = '0' + strngay;
	string strthang = to_string(x.thang);
	if(strthang.size() == 1)
		strthang = '0' + strthang;
	cout << "\nNgay Hom Truoc: " << strngay << "/" << strthang << "/" << x.nam;
}
//Ham Ngay Thuong
date NgayThuong(date x)
{
	date kq = {x.ngay-1,x.thang,x.nam};
	return kq;
}
//Ham Ngay Dau Thang
date NgayDauThang(date x)
{
	date kq = {N[x.thang-1] , x.thang-1 , x.nam};
	return kq;
}
//Ham Ngay Dau Nam
date NgayDauNam(date x)
{
	date kq = {N[12],12,x.nam-1};
	return kq;
}

//Ham tim ngay truoc
date TimNgayHomTruoc(date x)
{
    if ((x.ngay == 1) && (x.thang == 1))
        return NgayDauNam(x);
    if(x.ngay ==1)
    	return NgayDauThang(x);
    return NgayThuong(x);
}

//Ham Chinh
int main()
{
	date x;
	date NgayHomTruoc;
	Nhap(x);
	KTNN(x); // Kiem tra YEAR 
	NgayHomTruoc = TimNgayHomTruoc(x);
	Xuat(x);
	XuatNgayHomTruoc(NgayHomTruoc);
}



