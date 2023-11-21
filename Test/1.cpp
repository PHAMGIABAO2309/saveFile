
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

struct MatHang {
    std::string tenHang;
    int soLuong;
    float donGia;
};

bool compare(const MatHang& a, const MatHang& b) {
    return a.soLuong > b.soLuong;
}

int main() {
    std::vector<MatHang> danhSachMatHang;
    std::ifstream file("mathang.txt");

    if (file.is_open()) {
        int n; // s? lu?ng m?t hàng
        file >> n;

        for (int i = 0; i < n; i++) {
            MatHang matHang;
            file >> matHang.tenHang >> matHang.soLuong >> matHang.donGia;
            danhSachMatHang.push_back(matHang);
        }

        file.close();

        std::cout << "Danh sach mat hang ban dau:" << std::endl;
        for (const auto& matHang : danhSachMatHang) {
            std::cout << matHang.tenHang << " - " << matHang.soLuong << " - " << matHang.donGia << std::endl;
        }

        std::sort(danhSachMatHang.begin(), danhSachMatHang.end(), compare);

        std::cout << "Danh sach mat hang sau khi sap xep theo so luong giam dan:" << std::endl;
        for (const auto& matHang : danhSachMatHang) {
            std::cout << matHang.tenHang << " - " << matHang.soLuong << " - " << matHang.donGia << std::endl;
        }
    } else {
        std::cout << "Khong the mo file mathang.txt." << std::endl;
    }

    return 0;
}

