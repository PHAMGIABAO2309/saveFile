/* viet ct dn kieu cau truc NGAYTHANG gom 3 thuoc tinh (ngay,thang,nam).
Dua tren kieu cau truc NGAYTHANG da co, tiep tuc dn kieu cau truc SINHVIEN gom
cac thong tin(MaSV, Hodem,ten,ngay thang nam sinh, gioitinh, hokhau thuong tru,
diem thi dai hoc)
a) Nhap danh sach sv 
b) hien thi danh sach sv da nhap
c) sap xep danh sach sinh vien theo diem tang dan
d) hien thi danh sach sau khi sap xep */
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
struct NGAYTHANG
{
	int ngay,thang,nam;
};
struct SINHVIEN
{
	string masv;
	string hodem;
	string ten;
	NGAYTHANG ngaysinh;
	string gioitinh;
	string hokhau;
	float diemthidaihoc;
};
//------Cau A----------
void Nhap(SINHVIEN &SV)
{
	cout<<"\n Nhap Ma Sinh Vien: ";
	cin.ignore();
	getline(cin,SV.masv);
	cout<<" Nhap Ho & Ten Dem: ";
	getline(cin,SV.hodem);
	cout<<" Nhap Ten: ";
	getline(cin,SV.ten);
	cout<<" Nhap Ngay Sinh: ";
	cin>>SV.ngaysinh.ngay;
	cout<<"Nhap Thang Sinh: ";
	cin>>SV.ngaysinh.thang;
	cout<<"Nhap Nam Sinh: ";
	cin>>SV.ngaysinh.nam;
	cout<<"Nhap gioi tinh: ";
	cin.ignore();
	getline(cin,SV.gioitinh);
	cout<<"Nhap Ho Khau: ";
	getline(cin,SV.hokhau);
	cout<<"Nhap diem: ";
	cin>>SV.diemthidaihoc;
}
//---------Cau B-----------
void HienthiSV(SINHVIEN &SV)
{
	cout<<setw(20)<<left<<"Ma SV:";
	cout<<setw(20)<<left<<"Ho Dem:";
	cout<<setw(20)<<left<<"Ten";
	cout<<setw(20)<<left<<"Ngay Sinh:";
	cout<<setw(20)<<left<<"Thang Sinh:";
	cout<<setw(20)<<left<<"Nam Sinh:";
	cout<<setw(20)<<left<<"Gioi Tinh:";
	cout<<setw(20)<<left<<"Ho Khau:";
	cout<<setw(20)<<left<<"Diem";
	cout<<setw(150)<<" "<<endl;
	cout<<setw(20)<<left<<SV.masv;
	cout<<setw(20)<<left<<SV.hodem;
	cout<<setw(20)<<left<<SV.ten;
	cout<<setw(20)<<left<<SV.ngaysinh.ngay;
	cout<<setw(20)<<left<<SV.ngaysinh.thang;
	cout<<setw(20)<<left<<SV.ngaysinh.nam;
	cout<<setw(20)<<left<<SV.gioitinh;
	cout<<setw(20)<<left<<SV.hokhau;
	cout<<setw(20)<<left<<SV.diemthidaihoc;
}
//------Cau C----------
void SapXepTangDan(SINHVIEN *p, int n)
{
	for(int i=0; i<n;i++)
	{
		for(int j=i+1; j<n;j++)
		{
			if(p[i].diemthidaihoc > p[j].diemthidaihoc)
			{
				SINHVIEN tam = p[j];
				p[j] = p[i];
				p[i]= tam;
			}
		}
	}
}
void NhapSV(SINHVIEN *p, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap thong tin cua sinh vien thu ["<<i+1<<"]: ";
		Nhap(p[i]);
	}
}
void XuatSV(SINHVIEN *p, int n)
{
	for(int i=0; i<n;i++)
	{
		HienthiSV(p[i]);
		cout<<"\n";
	}
}
int main()
{
	int n;
	cout<<"Nhap vao so luong Sinh Vien: "; cin>>n;
	SINHVIEN *p;
	p = new SINHVIEN[n];
	cout<<"Nhap vao thong tin "<<n<<" Sinh Vien: ";
	NhapSV(p,n);
	cout<<"\nHien thi thong tin vua nhap: \n";
	XuatSV(p,n);
	cout<<"\n Danh Sach sau khi sap xep: \n";
	SapXepTangDan(p,n);
	XuatSV(p,n);
}
