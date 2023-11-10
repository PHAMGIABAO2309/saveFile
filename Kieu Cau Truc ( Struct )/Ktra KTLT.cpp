#include<iostream>
using namespace std;
struct KhachHang
{
	string hoten;
	int sosachmuon;
	string ngaymuon;
	int loaikhachhang;
	int tongtien;
};
//=========cau a===========
void NhapKhachHang(KhachHang &kh)
{
	cout<<"\nNhap ho ten: ";
	getline(cin,kh.hoten);
	cout<<"Nhap so sach muon: ";
	cin>>kh.sosachmuon;
	cin.ignore();
	cout<<"Nhap ngay muon: ";
	getline(cin,kh.ngaymuon);
	cout<<"Nhap loai khach hang ( 0 or 1 ): ";
	cin>>kh.loaikhachhang;
	cin.ignore();
	kh.tongtien = 0;
}
//--------Cau B------------
int tienphaitra(KhachHang kh)
{
	int tongtien = 20000 * kh.sosachmuon;
	if(kh.loaikhachhang == 1)
	{
		tongtien = tongtien - ( tongtien * 10/100);
	}
	return tongtien;
}
//----------Cau C---------
int soluongloai1(KhachHang ds[],int n)
{
	int count = 0;
	for(int i=0; i<n; i++)
	{
		if(ds[i].loaikhachhang == 1)
			count++;
	}
	return count;
}
int soluongloai0(KhachHang ds[],int n)
{
	return n - soluongloai1(ds,n);
}
int main()
{
	int n;
	cout<<"Nhap so luong khach hang: ";
	cin>>n;
	cin.ignore();
	KhachHang dskh[n];
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap thong tin khach hang thu ["<<i+1<<"]: ";
		//----cau a-----
		NhapKhachHang(dskh[i]);
		//----cau B-----
		float tongtien = tienphaitra(dskh[i]);
		cout<<"Tong Tien: "<<tongtien;
	}
	//-----Cau C-----
	int soluongkh1 = soluongloai1(dskh,n);
	int soluongkh0 = soluongloai0(dskh,n);
	cout<<"\nSo luong khach hang loai 1: "<<soluongkh1;
	cout<<"\nSo luong khach hang loai 0: "<<soluongkh0;
}