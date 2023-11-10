
#include <iostream>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void timsonguyentodautien(int a[],int n)
{
	int soNguyenToDauTien = -1;
    for (int i = 0; i < n; i++) 
	{
        if (isPrime(a[i])) 
		{
            soNguyenToDauTien = a[i];
            break;
        }
    }
    if (soNguyenToDauTien != -1) {
        cout << "So nguyen to dau tien trong mang la: " << soNguyenToDauTien;
    } else {
        cout << "Mang khong co gia tri so nguyen to";
    }
}
int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    
    int a[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i+1<<"]: ";
        cin >> a[i];
    }
    timsonguyentodautien(a,n);
    return 0;
}

