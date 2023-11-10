
#include<iostream>
using namespace std;

void nhap(int a[], int n) {
    for(int i=0; i<n; i++) {
        cout << "nhap phan tu thu [" << i+1 << "]: ";
        cin >> a[i];
    }
}

void tbcchiahet3(int a[], int n) {
    float s = 0;
    float count = 0;
    
    for(int i=0; i<n; i++) {
        if(a[i] % 3 == 0) {
            s += a[i];
            count++;
        }
    }
    
    if (count > 0) {
        float tbc = (float)s / count;
        cout<<"Trung binh cong chia het cho 3: "<<tbc;
    }
    else {
        cout << "Khong co phan tu nao chia het cho 3";
    }
}

void xuat(int a[], int n) {
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    
    int a[n];
    nhap(a, n);
    
    tbcchiahet3(a, n);
    
    cout << "Cac phan tu trong mang: ";
    xuat(a, n);
    
    return 0;
}

