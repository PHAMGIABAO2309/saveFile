#include <iostream>
#include <string>
using namespace std;

struct DienKe {
    string hoTen;
    string diaChi;
    int chiSoCu;
    int thanhTien;
};

void nhapThongTin(DienKe danhSach[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin so luong dien ke thu " << i + 1 << ":" << endl;
        cout << "Ho ten: ";
        cin.ignore();
        getline(cin, danhSach[i].hoTen);
        cout << "Dia chi: ";
        getline(cin, danhSach[i].diaChi);
        cout << "Chi so cu: ";
        cin >> danhSach[i].chiSoCu;
        danhSach[i].thanhTien = 0;
    }
}

int tinhThanhTien(DienKe& dienKe) {
    int tienKhoiTao = 1000;
    int kwhDinhMuc = 50;
    int tienDinhMuc = 450;
    int tienPhanVuot1 = 700;
    int tienPhanVuot2 = 910;
    int tienPhanVuot3 = 1200;

    int soKwhVuot = dienKe.chiSoCu - kwhDinhMuc;

    if (soKwhVuot <= 0) {
        dienKe.thanhTien = tienKhoiTao + tienDinhMuc;
    } else if (soKwhVuot <= 50) {
        dienKe.thanhTien = tienKhoiTao + tienDinhMuc + soKwhVuot * tienPhanVuot1;
    } else if (soKwhVuot < 100) {
        dienKe.thanhTien = tienKhoiTao + tienDinhMuc + 50 * tienPhanVuot1 + (soKwhVuot - 50) * tienPhanVuot2;
    } else {
        dienKe.thanhTien = tienKhoiTao + tienDinhMuc + 50 * tienPhanVuot1 + 50 * tienPhanVuot2 + (soKwhVuot - 100) * tienPhanVuot3;
    }

    return dienKe.thanhTien;
}

void inThongTin(DienKe danhSach[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "==============================" << endl;
        cout << "Thong tin dien ke thu " << i + 1 << ":" << endl;
        cout << "Ho ten: " << danhSach[i].hoTen << endl;
        cout << "Dia chi: " << danhSach[i].diaChi << endl;
        cout << "Chi so cu: " << danhSach[i].chiSoCu << endl;
        cout << "Thanh tien: " << danhSach[i].thanhTien << " d" << endl;
    }
}

void inDienKeVuotDinhMuc(DienKe danhSach[], int n) {
    bool coDienKeVuot = false;
    for (int i = 0; i < n; i++) {
        if (danhSach[i].thanhTien > 14500) {  // 450 + 50 * 700 = 14500
            coDienKeVuot = true;
            cout << "Ho ten: " << danhSach[i].hoTen << endl;
            cout << "Dia chi: " << danhSach[i].diaChi << endl;
        }
    }
    if (!coDienKeVuot) {
        cout << "Khong co dien ke nao vuot qua dinh muc tieu thu." << endl;
    }
}

int main() {
    int n;
    cout << "Nhap so luong dien ke cua mot ho: ";
    cin >> n;

    DienKe danhSach[n];

    nhapThongTin(danhSach, n);

    cout << endl;
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        tinhThanhTien(danhSach[i]);
    }

    inThongTin(danhSach, n);

    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Danh sach cac ho vuot qua dinh muc tieu thu: " << endl;
    inDienKeVuotDinhMuc(danhSach, n);

    return 0;
}


