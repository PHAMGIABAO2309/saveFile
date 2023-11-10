#include <iostream>
using namespace std;

struct date
{int ngay;int thang;int nam;};
// x 		  input
// ngayhomsau output
int N[] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//KTNN
int KTNN(date x)
{
	if((x.nam%4==0) && (x.nam%100!=0||x.nam%400==0))
		return 1;
}
//1.Ham kiem tra hop le
int KTHL(date x)
{
	if(KTNN(x))
		N[2] = 29;
	if(!(x.thang >=1 && x.thang <=12))
		return 0;
	if(!(x.ngay >=1 && x.ngay <=N[x.thang]))
		return 0;
	return 1;
}
//2. Ham Nhap
void Nhap(date &x)
{
	do{
		cout << "Nhap ngay:";  cin >> x.ngay;
		cout << "\nNhap thang:"; cin >> x.thang;
		cout << "\nNhap nam:"; cin >> x.nam;
	}while(!KTHL);
}
//3. Ham Xuat
void XuatNgayHomSau(date x)
{
	string strngay = to_string(x.ngay);
	if(strngay.size() == 1)
		strngay = '0' + strngay;
	string strthang = to_string(x.thang);
	if(strthang.size() == 1)
		strthang = '0' + strthang;
	cout << "\nNgay Hom Sau: " << strngay << "/" << strthang << "/" << x.nam;
}
//4. Ham ngay thuong
date NgayThuong(date x)
{
	date kq ={x.ngay+1,x.thang,x.nam};
	return kq;
}
//5. Ham ngay cuoi thang
date NgayCuoiThang(date x)
{
	date kq = {1, x.thang+1, x.nam};
	return kq;
}
//6. Ham ngay cuoi nam
date NgayCuoiNam(date x)
{
	date kq = {1,1,x.nam+1};
	return kq;
}
//7. Ham tim ngay hom sau
date TimNgayHomSau(date x)
{
	date kq = NgayThuong(x);
	if(x.ngay == 31 && x.thang ==12)
		return NgayCuoiNam(x);
	if(x.ngay == (N[x.thang]+(x.thang==2&&KTNN(x))))
		return NgayCuoiThang(x);
	return kq;
}


int main()
{
	date x;
	date NgayHomSau;
	Nhap(x);
	NgayHomSau = TimNgayHomSau(x);
	XuatNgayHomSau(NgayHomSau);
}







