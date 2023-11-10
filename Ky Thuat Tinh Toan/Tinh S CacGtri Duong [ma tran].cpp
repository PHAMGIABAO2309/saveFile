
#include <iostream>
using namespace std;

void Nhap(float mat[100][100],int m,int n)
{
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap phan tu thu mat[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}
float tinhTongSoDuong(float mat[100][100], int m, int n) {
    float tong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] > 0) {
                tong += mat[i][j];
            }
        }
    }
    return tong;
}

int main() {
    int m, n;
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;

    float mat[100][100];
    cout << "Nhap cac phan tu ma tran:" << endl;
    Nhap(mat,m,n);

    float tongSoDuong = tinhTongSoDuong(mat, m, n);
    cout << "Tong cac so duong trong ma tran la: " << tongSoDuong << endl;

    return 0;
}

