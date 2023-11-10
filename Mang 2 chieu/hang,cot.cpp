#include <iostream>

using namespace std;

int main() {
  int n, m;
  int a[100][100];
  cout << "Nhap so hàng cua mang: ";
  cin >> n;
  cout << "Nhap so cot cua mang: ";
  cin >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      
      cin >> a[i][j];
    }
  }

  // In tu hang thanh cot
  for (int j = 0; j < m; j++) {
    for (int i = 0; i < n; i++) {
      cout << a[i][j] << " ";
    }
    cout<<endl;
  }

  // In tu cot thanh hang
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << a[j][i] << " ";
    }
    cout<<endl;
  }
}

