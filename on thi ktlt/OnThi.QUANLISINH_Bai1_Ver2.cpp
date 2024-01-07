#include <iostream>
#include <string>
using namespace std;

struct SINHVIEN
{
    string SoBaoDanh;
    string HoTen;
    int Ma_Nganh;
    int Khu_Vuc;
    int Doi_Tuong;
    float DiemToan, DiemLy, DiemHoa;
    float Tong_Diem;
    int Ket_Qua;

    void Nhap()
    {
        cin.ignore();
        cout << "Nhap so bao danh:";
        getline(cin, SoBaoDanh);
        cout << "Nhap ho va ten:";
        getline(cin, HoTen);
        do
        {
            cout << "Nhap ma nganh: 1-Toan, 2-Ly, 3-Hoa";
            cin >> Ma_Nganh;
        } while (!(Ma_Nganh >= 1 && Ma_Nganh <= 3));
        // Nhap khu vuc
        do
        {
            cout << "Nhap khu vuc: 1-Khu vuc 1,  2-Khu vuc 2,  3-Khu vuc 3";
            cin >> Khu_Vuc;
        } while (!(Khu_Vuc >= 1 && Khu_Vuc <= 3));

        // Nhap doi tuong
        do
        {
            cout << "Nhap doi tuong:  1-nhom 1, 2-nhom 2,  3-nhom 3:";
            cin >> Doi_Tuong;
        } while (!(Doi_Tuong >= 1 && Doi_Tuong <= 3));
        // Nhap Diem
        // TOAN
        do
        {
            cout << "Nhap diem toan:";
            cin >> DiemToan;
        } while (!(DiemToan >= 1 && DiemToan <= 10));
        // DIEM LY
        do
        {
            cout << "Nhap diem ly:";
            cin >> DiemLy;
        } while (!(DiemLy >= 1 && DiemLy <= 10));
        // DIEM HOA
        do
        {
            cout << "Nhap diem hoa:";
            cin >> DiemHoa;
        } while (!(DiemHoa >= 1 && DiemHoa <= 10));
    }

    // Tinh Tong
    void TinhTong()
    {
        if (Ma_Nganh == 1)
            Tong_Diem = DiemToan * 2 + DiemLy + DiemHoa;
        if (Ma_Nganh == 2)
            Tong_Diem = DiemToan + DiemLy * 2 + DiemHoa;
        if (Ma_Nganh == 3)
            Tong_Diem = DiemToan + DiemLy + DiemHoa * 2;
    }

    // Xuat Thong tin sinh vien
    void Xuat()
    {
        string MaNganh[3] = {"Toan", "Ly", "Hoa"};
        string KhuVuc[3] = {"Khu vuc 1", "Khu vuc 2", "Khu vuc 3"};
        string DoiTuong[3] = {"Nhom 1", "Nhom 2", "Nhom 3"};
        string KetQua[2] = {"Rot", "Dau"};
        cout << SoBaoDanh << "   " << HoTen << "   " << MaNganh[Ma_Nganh - 1] << "   " << KhuVuc[Khu_Vuc - 1] << "   " << DoiTuong[Doi_Tuong - 1] << "   " << Tong_Diem << "   " << KetQua[Ket_Qua] << endl;
    }
};

struct DSSV
{
    SINHVIEN sv[50]; // Sử dụng mảng động
    int n;

    void NhapDSSV()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
            sv[i].Nhap();
        }
    }

    void TinhTongDS()
    {
        for (int i = 0; i < n; i++)
        {
            sv[i].TinhTong();
        }
    }

    // Xet ket qua dua tren bang diem
    void XacDinhKetQua()
    {
        float bang[3][3] =
            {
                {22.0, 23.0, 24.0},
                {22.5, 23.5, 24.5},
                {23.0, 24.0, 25.0}};
        for (int i = 0; i < n; i++)
        {
            if (sv[i].Tong_Diem >= bang[sv[i].Khu_Vuc - 1][sv[i].Doi_Tuong - 1])
                sv[i].Ket_Qua = 1;
            else
                sv[i].Ket_Qua = 0;
        }
    }

    // In ra danh sach sinh vien trung tuyen
    void XuatSVTrungTuyen()
    {
        cout << "Danh sach sinh vien trung tuyen:" << endl;
        for (int i = 0; i < n; i++)
        {
            if (sv[i].Ket_Qua == 1)
                sv[i].Xuat();
        }
    }
};

int main()
{
    DSSV ds;
    int n;
    do
    {
        cout << "Nhap so luong sinh vien:";
        cin >> n;
    } while (!(n >= 1 && n <= 50));

    ds.n = n;
    ds.NhapDSSV();
    ds.TinhTongDS();
    ds.XacDinhKetQua();
    ds.XuatSVTrungTuyen();

    return 0;
}
