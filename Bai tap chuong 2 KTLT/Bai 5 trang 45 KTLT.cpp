#include <iostream>
using namespace std;

struct GuiNganHang
{
	int phuongthuc;
	int sotiengui;
	int thoigian;
	float tong;	
};

void Nhap(GuiNganHang &x)
{
	cout << "Moi ban nhap phuong thuc gui: Khong ky han (1) - Co ky han (2)\n"; cin >> x.phuongthuc;
	cout << "So tien ban gui: "; cin  >> x.sotiengui;
	cout << "Nhap thoi gian gui(thang): "; cin >> x.thoigian;
}
void Xuat(GuiNganHang x)
{
	cout << "So tien ban gui sau khoang thoi gian " << x.thoigian << " thang = " << x.tong;
}

void Tinh(GuiNganHang &x)
{
	x.tong = 0;
	float laisuat;
	x.tong = x.sotiengui;
	if(x.phuongthuc == 1)
	{
		laisuat = 0.024;
		for(int i  = 1; i <=x.thoigian; i++)
			x.tong += x.tong*0.024; 
	}
		
	if(x.phuongthuc == 2)
    {
    	laisuat = 0.04;
        if (x.thoigian >= 3)
        {
            int thangLai = x.thoigian / 3;
            for(int i = 1; i <= thangLai; i++)
            {
                x.tong += x.tong * laisuat * 3;
            }
        }
    }
}


int main()
{
	GuiNganHang x;
	Nhap(x);
	Tinh(x);
	Xuat(x);
}

//============Cach 2======================
#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
struct LaiXuat
{
	char NgDung[50];
	double Sotiengui;
	int Thoihanrut;
	int Pt;
	double Laixuat;
	double Tongtien;
};
void Nhap(LaiXuat &x)
{
	cout<<"Ten NgDung: ";
	cin>>x.NgDung;
	cout<<"So tien gui: ";
	cin>>x.Sotiengui;
	cout<<"Thoi han rut tien:";
	cin>>x.Thoihanrut;
	cout<<"\nPhuong thuc gui tiet kiem \n 1.Khong ky han \n 2.Co ky han (3 thang lai xuat 1 lan) \n 3.Khong phuong thuc nao"<<endl;
	cout<<"\nNhap 1 trong 3 phuong thuc tren: ";
	cin>>x.Pt;
	switch(x.Pt)
	{
		case 1:
			x.Laixuat=1.0*97.6/100;
			break;
		case 2:
			x.Laixuat=1.0*96/100;
			break;
		default:
			x.Laixuat=1;
			break;
	}
}
void Lai(LaiXuat &x)
{
	x.Tongtien=x.Sotiengui;
	if(x.Pt==1)
	{
		for(int i=1;i<=x.Thoihanrut;i++)
		{
			x.Tongtien=1.0*x.Tongtien/ x.Laixuat;
		}
	}
	if(x.Pt==2)
	{
		for(int i=3;i<=x.Thoihanrut;i=i+3)
		{
			x.Tongtien=1.0*x.Tongtien/x.Laixuat;
		}
	}
}
void Xuat(LaiXuat x)
{
	cout<<setw(20)<<left<<"NgDung";
	cout<<setw(20)<<left<<"So tien gui";
	cout<<setw(20)<<left<<"Thoi han rut";
	cout<<setw(20)<<left<<"Phuong thuc";
	cout<<setw(20)<<left<<"Lai xuat";
	cout<<setw(10)<<right<<"Tien"<<endl;
	cout<<setw(150)<<" "<<endl;
	cout<<setw(20)<<left<<x.NgDung;
	cout<<setw(20)<<left<<x.Sotiengui;
	cout<<setw(20)<<left<<x.Thoihanrut;
	cout<<setw(20)<<left<<x.Pt;
	cout<<setw(20)<<left<<x.Laixuat;
	cout<<setw(10)<<right<<x.Tongtien;
}
int main()
{
	LaiXuat x;
	Nhap(x);
	Lai(x);
	Xuat(x);
	return 1;
}