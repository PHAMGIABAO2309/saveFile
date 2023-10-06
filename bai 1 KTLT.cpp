
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap vao 3 canh cua tam giac: " << endl;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Day la tam giac deu" << endl;
        } else if (a == b || b == c || a == c) {
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                cout << "Day la tam giac vuong can" << endl;
            } else {
                cout << "Day la tam giac can" << endl;
            }
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Day la tam giac vuong" << endl;
        } else {
            cout << "Day la tam giac thuong" << endl;
        }
    } else {
        cout << "Day khong phai la tam giac" << endl;
    }

    return 0;
}


