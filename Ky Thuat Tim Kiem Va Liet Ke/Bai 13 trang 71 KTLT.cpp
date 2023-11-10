#include<iostream>
using namespace std;

void lietke(int a[], int n) {
    cout << "\nCac gia tri chan co it nhat mot lan can cung la gia tri chan: \n ";
    for(int i = 1; i < n-1; i++) {
        if(a[i] % 2 == 0 )
		{
			if(a[i-1] % 2 == 0 || a[i+1] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
}
    cout << endl;
}

void nhap(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu [" << i+1 << "]: ";
        cin >> a[i];
    }
}

void xuat(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    int a[n];
    nhap(a, n);
    xuat(a, n);
    lietke(a, n);
    return 0;
}