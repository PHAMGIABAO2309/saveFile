#include<iostream>
using namespace std;

struct date {
    int ngay, thang, nam;
};

struct hocsinh {
    char mshs[6];
    char hoten[31];
    struct date ngaysinh;
    char diachi[51];
     char phai[4];
    float dtb;
};

void nhapnamsinh(date &d) {
    cout << "\nNhap vao ngay: ";
    cin >> d.ngay;
    cout << "\nNhap vao thang: ";
    cin >> d.thang;
    cout << "\nNhap vao nam: ";
    cin >> d.nam;
}

void xuatnamsinh(date &d) {
    cout << d.ngay << "/" << d.thang << "/" << d.nam;
}

void nhap1hs(hocsinh &hs) {
    float d;
    cout << "\nNhap ma so hoc sinh: ";
    cin.ignore();
    cin.getline(hs.mshs, 6);
    cout << "\nNhap ho ten hoc sinh: ";
    cin.getline(hs.hoten, 31);
    
    cout << "\nNhap ngay thang nam sinh: ";
    nhapnamsinh(hs.ngaysinh);
    cin.ignore();
    cout << "\nNhap vao dia chi: ";
    cin.getline(hs.diachi, 51);
    cout << "\nPhai: ";
    cin.getline(hs.phai, 4);
    cout << "\nNhap vao diem tb: ";
    cin >> hs.dtb;
}

void nhapdshs(hocsinh lh[], int &n) {
    cout << "\nNhap vao so luong hoc sinh: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\nNhap vao thong tin cua hoc sinh thu " << i + 1 << ": ";
        nhap1hs(lh[i]);
    }
}

void xuat1hs(hocsinh hs) {
    cout << " \nMa so hoc sinh: " << hs.mshs;
    cout << "\nHo ten hoc sinh: " << hs.hoten;
    cout << "\nNgay thang nam sinh: ";
    xuatnamsinh(hs.ngaysinh);
    cout << "\nDia chi: " << hs.diachi;
    cout << "\n\nPhai: " << hs.phai;
    cout << "\nDiem trung binh: " << hs.dtb;
}

void xuatdshs(hocsinh lh[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nThong tin hoc sinh thu " << i + 1 << ": ";
        xuat1hs(lh[i]);
    }
}

int demhslenlop(hocsinh lh[], int n) {
    int d = 0;
    for (int i = 0; i < n; i++) {
        if (lh[i].dtb >= 5.0) {
            d++;
        }
    }
    return d;
}

int main() {
    int n;
    hocsinh lh[50];
    date d;
    nhapdshs(lh, n);
    xuatdshs(lh, n);
    cout << "So hoc sinh len lop: " << demhslenlop(lh, n);
    return 0;
}

