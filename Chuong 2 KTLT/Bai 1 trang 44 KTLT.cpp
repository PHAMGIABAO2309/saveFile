#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

struct SinhVien
{
	string Id;
	static int dem;
	string HoTen;
	int Ma_Nganh;
	int Khu_Vuc;
	int Doi_Tuong;
	float DiemToan, DiemLy, DiemHoa;
	float TongDiem;
	int KetQua;	
};
//===================== CAU A ===========================
void Nhap(SinhVien a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin SV thu " << i+1 << ":\n";
	//	cout << "SBD:"; cin >> a[i].Id;
		cin.ignore();
		cout << "Nhap ho ten ";
		getline(cin,a[i].HoTen);
		do{
			cout << "Nhap ma nganh 1-2-3: ";
			cin >> a[i].Ma_Nganh;
		}while(a[i].Ma_Nganh <1 || a[i].Ma_Nganh > 3);
		do{
			cout << "Nhap khu vuc 1-2-3: ";
			cin >> a[i].Khu_Vuc;
		}while(a[i].Khu_Vuc <1 || a[i].Khu_Vuc > 3);
		do{
			cout << "Nhap doi tuong 1-2-3: ";
			cin >> a[i].Doi_Tuong;
		}while(a[i].Khu_Vuc <1 || a[i].Khu_Vuc > 3);
		do{
			cout << "Nhap diem hop le  0 - 10 \n";			
			cout << "Toan:"; cin >> a[i].DiemToan;
			cout << "Ly:"; cin >> a[i].DiemLy;
			cout <<"Hoa:"; cin >> a[i].DiemHoa;
		}while((a[i].DiemToan <0 || a[i].DiemToan > 10) || (a[i].DiemLy <0 || a[i].DiemLy > 10) || (a[i].DiemHoa <0 || a[i].DiemHoa > 10)); 
		
	}
}
//===================== CAU B ===============================
int TongDiem(SinhVien a[], int n)
{
	for(int i =0; i <n; i++)
	{
		if (a[i].Ma_Nganh == 1)
			a[i].TongDiem = a[i].DiemToan*2 + a[i].DiemLy + a[i].DiemHoa;
		if (a[i].Ma_Nganh == 2)
			a[i].TongDiem = a[i].DiemToan + a[i].DiemLy*2 + a[i].DiemHoa;
		if (a[i].Ma_Nganh == 3)
			a[i].TongDiem = a[i].DiemToan + a[i].DiemLy + a[i].DiemHoa*2;
	}
	return 1;
}
//======================= CAU C ===================================

struct BangDiem
{
	int Khu_Vuc;
	int Doi_Tuong;
	float kq;
	
};

BangDiem data[] = {
    {1, 1, 22.0}, {1, 2, 22.5}, {1, 3, 23.0},
    {2, 1, 23.0}, {2, 2, 23.5}, {2, 3, 24.0},
    {3, 1, 24.0}, {3, 2, 24.5}, {3, 3, 25.0}
};
// Hàm ki?m tra k?t qu?
void KTKetQua(SinhVien a[], int n, BangDiem data[], int dataLength)
{
    for (int i = 0; i < n; i++)
    {
        float tam = 0.0;

        // Tìm Ði?m Chu?n d?a trên Khu_Vuc và Doi_Tuong c?a sinh viên
        bool dau = false; 
        for (int j = 0; j < dataLength; j++)
        {
            if (data[j].Khu_Vuc == a[i].Khu_Vuc && data[j].Doi_Tuong == a[i].Doi_Tuong)
            {
                tam = data[j].kq;
                dau = true;
                break;
            }
        }
        // Ki?m tra di?m chu?n và dánh giá k?t qu?
        if (dau)
		{
            if (a[i].TongDiem >= tam){
                a[i].KetQua = 1; // Ð?
            } else {
                a[i].KetQua = 0; // R?t
            }
    	}
    }
}

//Danh sach ket qua sinh vien
void XuatSV(SinhVien a[], int n)
{
	for(int i =0; i <n; i++)
	{
		if(a[i].KetQua == 1)
			cout << "Sinh vien " << a[i].HoTen << " Dau\n";
		else
			cout << "Sinh vien " << a[i].HoTen << " Rot\n";
	}
}
//=========================== D ===============================
void SinhVienTrungTuyen(SinhVien a[], int n)
{
	int dem = 0; 
    cout << "\n\nDanh Sach Sinh Vien Da Trung Tuyen:\n";
    cout << left << setw(10) << "SBD" << setw(30) << "Ho va Ten" << setw(10) << "Ma Nganh" << setw(10) << "Khu Vuc" << setw(10) << "DoiTuong" << setw(10) << "Tong Diem" << endl;

    for (int i = 0; i < n; i++)
    {
    	++dem;
    	a[i].Id = to_string(i+1);
    	a[i].Id = string(3-a[i].Id.size(),'0') + a[i].Id;
        if (a[i].KetQua)
        {
            cout << left << setw(10) << a[i].Id << setw(30) << a[i].HoTen << setw(10) << a[i].Ma_Nganh << setw(10) << a[i].Khu_Vuc << setw(10) << a[i].Doi_Tuong << setw(10) << fixed << setprecision(1) << a[i].TongDiem << endl;
        }               
    }
}                          
int main()
{
	SinhVien a[100];
	int n;
	cout << "Nhap so luong sinh vien: "; cin >> n;
	Nhap(a, n);
	TongDiem(a, n);
	KTKetQua(a, n, data, 9);
	XuatSV(a, n);
	SinhVienTrungTuyen(a, n);	
}
