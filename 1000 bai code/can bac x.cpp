#include <iostream>
#include <math.h>
using namespace std;
double tinhS(double x, int n) {
  double s = 0.0;
  for (int i = 0; i < n; i++) {
    s += x;
    x = sqrt(x);
  }
  return s;
}
int main() {
  double x;
  int n;
  cout << "Nhap x: ";cin >> x;
  cout << "Nhap n: ";cin >> n;
  double kq = tinhS(x, n);
  cout << "Tong s = " << kq;
}


