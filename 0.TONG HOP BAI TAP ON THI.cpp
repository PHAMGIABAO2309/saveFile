#include <iostream>
#include <math.h>
#include <limits.h>
#define N 100
using namespace std;

int a[100];


//=============================================
// MANG 1 CHIEU 
//=============================================
void Nhap(int a[100], int n){
	for(int i =0; i<n; i++){
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}

void Xuat(int a[100], int n){
	for(int i = 0;  i<n; i++){
		cout << a[i] << " ";
	}
}


//Dịch Phải Xoay Vong
void DichPhai(int a[100], int n){
	for(int i = n-1; i >0; i--){
		int tam = a[i];
		a[i] = a[i-1];
		a[i-1] = tam;
	}
}
//Dịch Trái xoay vong
void DichTrai(int a[100], int n)
{
	int tam = a[0];
	for(int i = 0; i< n-1; i++)
		a[i] = a[i+1];
	a[n-1] = tam;
	
	
}

//tim phan tu nho thu hai
int PhanTuNhoThuHai(int a[100], int n){
	int min = INT_MAX;
	int min2 = INT_MAX;
	for(int i=0; i<n; i++){
		if(a[i] < min)
			min = a[i];
	}
	
	for(int i = 0; i<n; i++){
		if(a[i]==min)
			continue;
		else{
			if(a[i] < min2)
				min2 = a[i];
		}
	}
	return min2;
}

//Xoa Phan Tu tai vi tri trong mang
void XoaPhanTu(int a[100], int &n){
	int xoa;
	cout << "Nhap phan tu xoa tai vi tri: "; cin  >> xoa;
	for(int i = xoa; i < n; i++){
		a[i] = a[i+1];
	}
	n--;
}




void ChenPhanTuTangDan(int a[100], int &n, int x) {
    int viTri = 0;
    // Tăng số lượng phần tử của mảng
    n++;
    
    // Tìm vị trí cần chèn
    while (viTri < n && a[viTri] < x) {
        viTri++;
    }
    
    // Dịch phải các phần tử từ vị trí cần chèn
    for (int i = n-1; i > viTri; i--) {
        a[i] = a[i - 1];
    }
    
    // Chèn phần tử vào vị trí tìm được
    a[viTri] = x;
    

}

void ChenPhanTuGiamDan(int a[100], int &n, int x) {
    int viTri = n;
    n++;
    // Tìm vị trí cần chèn
    while (viTri > 0 && a[viTri-1] < x) {
        viTri--;
    }
    
    // Dịch phải các phần tử từ vị trí cần chèn
    for (int i = n-1; i > viTri; i--) {
        a[i] = a[i - 1];
    }
    
    // Chèn phần tử vào vị trí tìm được
    a[viTri] = x;
    
    // Tăng số lượng phần tử của mảng

}

//Nhap so nguyên x viết hàm xóa các phần tử >= x
void XoaPhanTuLonHonBangX(int a[100], int &n, int x){    
    int m = 0;
    int s[100];
    
    // Tìm và lưu trữ các phần tử < x vào mảng s[]
    for(int i = 0; i < n; i++){
        if(a[i] < x){
            s[m] = a[i];
            m++;
        }
    }
    
    // Cập nhật lại mảng a[] với các phần tử < x
    n = m;
    for(int i = 0; i < n; i++){
        a[i] = s[i];
    }
}


void XoaPhanTuNhoHonBangX(int a[100], int &n, int x){
	int s[100];
	int m = 0;
	//Tim luu cac phan tu > x
	for(int i = 0; i<n; i++){
		if(a[i] > x){
			a[i] = a[m];
			m++;
		}
	}
	n = m;
	for(int i =0; i<n; i++){
		s[i] = s[i];
		
	}
}
//Đảo ngược mảng
void DaoNguocMang(int a[100], int n){
	for(int i = 0 ; i<n/2; i++){
		int tam = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = tam;
	}
}


//HÀM KIỂM TRA SỐ NGUYÊN TỐ
bool KTNT(int x){
	if(x < 2)
		return false;
	else
	{
		for(int i =2; i <= sqrt(x); i++){
			if(x % i == 0)
				return false;
		}
	}
	return true;
}
//Tong cac so nguyen to
int TongNT(int a[100], int n){
	int sum = 0;
	for(int i = 0; i < n ; i++){
		if(KTNT(a[i]))
			sum+=a[i];
	}
	return sum;
}
//Kiểm tra mảng có hai số nguyên tố liên tiếp hay không
bool KTNTlientiep(int a[100], int n){
	for(int i =0 ; i< n-1; i++){
		if(KTNT(a[i]) && KTNT(a[i+1]))
			return true;
	}
	return false;
}

//KT hai số có liên tiếp nhau =0
bool KTlientiep(int a[100], int n){
	for(int i = 0 ; i < n-1; i++){
		if(a[i] ==0 && a[+1]==0)
			return true;
	}
	return false;
}

//Tìm Vi Tri Số Âm Nhỏ Nhất Trong Mảng
int AmMin(int a[100], int n){
	int min = 1;
	int vitri = -1;
	for(int i=0; i<n; i++){
		if(a[i] < 0 && a[i] < min){
			min = a[i];
			vitri = i;
		}
	}
	return vitri;
}


//Xoa phan tu trung nhau
int KhuTrung(int a[100], int n){
	int k = 0;
	for(int i = 0; i<n; i++){
		bool daxoa = false;
		for(int j =0 ;j <k; j++){
			if(a[i]==a[j]){
				daxoa = true;
				break;
			}
		}
	
		if(!daxoa){
			a[k] = a[i];
			k++;
		}
	}
	return k;
}

bool KhuTrungg(int a[100], int n){
	int k = 0;
	for(int i=0; i<n; i++){
		bool daxoa = false;
		for(int j = 0; j <k; j++){
			if(a[i] == a[j]){
				daxoa = true;
				break;
			}
		}
		if(!daxoa){
			a[k] = a[i];
			k++;
		}
	}
	return k;
}

int KhuTrungDaiNghia(int a[100], int n){
	int k = 0;
	for(int i = 0; i<n; i++){
		bool daxoa = false;
		for(int j =0 ; j< k; j++){
			if(a[i] == a[j]){
				daxoa = true;
				break;
			}
				
		}
		if(!daxoa){
			a[k] = a[i];
			k++;
		}
    }
    return k;
}

void SapXepTangDan(int a[100], int n){
	for(int i=0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(a[i] > a[j]){
				int tam = a[i];
				a[i] = a[i+1];
				a[i+1] = tam;
			}
		}
	}
}

//===============================================
//MANG 2 CHIEU 
//===============================================

void Nhap(int a[10][10], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j = 0; j<m;j++)
		{
			cout << i << "." << j << "=";
			cin >> a[i][j];
		}
	}
}


void Xuat(int a[10][10], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j = 0; j<m;j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

//Ma Tran chuyen vi
void MTND(int a[][10], int n,int m){
	for(int j=0; j<m; j++){
		for(int i=0 ; i<n; i++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

//Chuyen thanh ma tran In
void MTVuong(int a[][10], int n, int m){
	for(int i =0; i<n; i++){
		for(int j =0; j< m; j++){
			if(i == j)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
}


//Ham KT ma tran co ton tai so nguyen to hay khong
bool KT(int a[10][10], int n, int m)
{
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m ; j++){
            bool NT = true;
            for(int k = 2; k <= sqrt(a[i][j]); k++){
                if(a[i][j] % k == 0){
                    NT = false;
                    break;
                }
            }
            if(NT)
                return true;
        }
    }
    return false;
}

//1.1Dich Phai Cot Ma tran
void DichPhaiCot(int a[10][10], int n, int m){
	for(int j = m-1; j>0; j--){
		for(int i = 0; i < n; i++){
			int sodau = a[i][j];
			a[i][j] = a[i][j-1];
			a[i][j-1] = sodau;
		}
	}
	
}
//1.2Dich Trai Cot Ma Tran
void DichTraiCot(int a[10][10], int n, int m){
	for(int j = 0; j< m-1;j++){
		for(int i = 0; i < n; i++){
			int sodau = a[i][j];
			a[i][j] = a[i][j+1];
			a[i][j+1] = sodau;
		}
	}
	
}

//2.1Dich Xuong Dong
void DichXuongDong(int a[10][10], int n, int m){
	for(int i = n-1; i>0; i--){
		for(int j = 0; j<m; j++){
			int sodau = a[i][j];
			a[i][j] = a[i-1][j];
			a[i-1][j] = sodau;
		}
	}
}


//2.2 Dich Len Dong
void DichLenDong(int a[10][10], int n, int m){
	for(int i = 0; i <n-1;i++){
		for(int j = 0; j<m; j++){
			int sodau = a[i][j];
			a[i][j] = a[i+1][j];
			a[i+1][j] = sodau;
		}
	}
}

//Tong cac phan tu nam tren dong dau va tren cot dau ma tran
int TongCacPhanTuDauDongDauCot(int a[][10], int n, int m){
	long tong = 0;
	for(int i = 0; i<n; i++)
		tong+=a[i][0];
	for(int j=0; j<m; j++)
		tong+=a[0][j];	
	tong-=a[0][0];
	return tong;
}
//Tong cac phan tu nam tren dong cuoi va tren cot cuoima tran
int TongCacPhanTuCotCuoiDongCuoi(int a[][10], int n, int m){
	long tong = 0;
	for(int i = 0; i<n; i++)
		tong+=a[i][m-1];
	for(int j=0; j<m; j++)
		tong+=a[n-1][j];	
	tong-=a[n-1][m-1];
	return tong;
}


int TongDuongBien(int a[10][10], int n, int m){
    int tong = 0;
    
    // Tính tổng các phần tử trên đường biên dọc
    for(int i = 0; i < n; i++){
        tong += a[i][0]; // Phần tử đầu tiên của hàng
        tong += a[i][m-1]; // Phần tử cuối cùng của hàng
    }
    
    // Tính tổng các phần tử trên đường biên ngang
    for(int j = 1; j < m-1; j++){
        tong += a[0][j]; // Phần tử đầu tiên của cột
        tong += a[n-1][j]; // Phần tử cuối cùng của cột
    }
    
    return tong;
}



//Tong tung dong cua ma tran 
void TongTungDong(int a[][10], int n, int m){
	for(int i = 0; i <n;i++){
		int tong = 0;
		for(int j = 0; j<m; j++){
			tong+=a[i][j];
		}
		cout << "tong dong thu " << i << " = " << tong << endl;
	}
}
//Tong tung cot cua ma tran
void TongTungCot(int a[][10], int n, int m){
	for(int j=0; j<m; j++){
		int tong = 0;
		for(int i=0; i<n; i++){
			tong+=a[i][j];
		}
		cout << "Tong cot thu " << j << " = " << tong << endl;
	}
}


//Tong cac phan tu nam duoi duong cheo chinh
// 1 2 3
// 4 5 6
// 7 8 9

// 0.0 0.1 0.2
// 1.0 1.1 1.2
// 2.0 2.1 2.2

int TongDuoiCheo(int a[][10], int n, int m){
	long tong = 0;
	for(int i = 0; i<n; i++)
		for(int j=0; j<m; j++){
			if(i>j)
				tong+=a[i][j];
		}
	return tong;
}
//Tong cac phan tu nam tren duong cheo chinh
int TongTrenCheo(int a[][10], int n, int m){
	long tong = 0;
	for(int i = 0; i<n; i++)
		for(int j=0; j<m; j++){
			if(i<j)
				tong+=a[i][j];
		}
	return tong;
}

//Tim phan tu nho nhat va vi tri cua no
void PhanTuMin(int a[][10], int n, int m){
	int min = a[0][0];
	int vti, vtj;
	for(int i = 0; i<n; i++){
		for(int j = 0;  j<m; j++){
			if(a[i][j] < min){
				min = a[i][j];
				vti = i;
				vtj = j;
			}
		}
	}
	cout << "Phan tu nho nhat trong mang : " << min;
	cout << "\nTai vi tri " << vti << "." << vtj;
}



//Chen cot ma tran
void ChenCot(int a[][10], int n, int &m, int cotmoi){
	m++;
	for(int j = m-1; j>cotmoi; j--){
		for(int i = 0; i<n; i++){
			a[i][j] = a[i][j-1];
		}
	}
	for(int i = 0; i<n; i++){
		cout << i << "." << cotmoi << "=";
		cin >> a[i][cotmoi];
	}
}


//Chen dong ma tran
void ChenDongz(int a[][10], int &n, int m, int dongmoi){
	n++;
	for(int i = n-1; i > dongmoi; i--){
		for(int j = 0; j<m; j++){
			int tam = a[i][j];
			a[i][j] = a[i-1][j];
			a[i-1][j] = tam;
		}
	}
	for(int j =0; j<m; j++){
		cout << dongmoi << "." << j << "="; cin >> a[dongmoi][j];
	}
}

void ChenDong(int a[10][10], int &n, int m, int x){
	n++;
	for(int i = n-1; i>x; i--){
		for(int j =0; j<m; j++){
			a[i][j] = a[i-1][j];
		}
	}
	for(int j = 0; j<m; j++){
		cout << x << "." << j<< "="; cin >> a[x][j];
	}
}

//Xoa Dong Ma Tran
void XoaDong(int a[][10], int &n, int m)
{
	int dong;
	cout << "Nhap dong can xoa: "; cin >> dong;
	n--;
	for(int i = dong;i<n; i++)
	{
		for(int j = 0; j<m; j++){
			a[i][j] = a[i+1][j];
		}
	}
}
// Xoa Cot Ma Tran
void XoaCot(int a[][10], int n, int &m)
{
	int cot;
	cout << "Nhap cot can xoa: "; cin  >> cot;
	for(int j = cot; j < m; j++)
	{
		for(int i = 0; i<n; i++)
		{
			a[i][j] = a[i][j+1];
		}
	}
	m--;
}
// Doi vi tri cua hai dong voi nhau
int DoiHaiDong(int a[10][10], int n , int m, int x, int y)
{
	for(int i = 0; i < n; i++)
	{
		int tam = a[x][i];
		a[x][i] = a[y][i];
		a[y][i] = tam;
	}
	return 0;
}
//Doi vi tri cua hai cot voi nhau
int DoiHaiCot(int a[10][10], int n , int m, int x, int y)
{
	for(int i = 0; i < n; i++)
	{
		int tam = a[i][x];
		a[i][x] = a[i][y];
		a[i][y] = tam;
	}
	return 0;
}
//S?p x?p m?ng 2 chi?u gi?m d?n
void SapXepGiam(int a[][10], int n, int m)
{
	int k = n*m;
	for(int i=0 ; i<k-1 ; i++)
	{
		for(int j=i+1; j<k ; j++)
		{
			if(a[i/n][i%n] < a[j/n][j%n])
			{
				int tam = a[i/n][i%n];
				a[i/n][i%n] = a[j/n][j%n];
				a[j/n][j%n] = tam;
			}
		}
	}
}

void SapXepTang(int a[10][10], int n, int m)
{
    int k = n * m;
    for (int i = 0; i < k - 1; i++)
	{
        for (int j = i + 1; j < k; j++)
		{
            if (a[i / m][i % m] > a[j / m][j % m])
			{
                int tam = a[i / m][i % m];
                a[i / m][i % m] = a[j / m][j % m];
                a[j / m][j % m] = tam;
            }
        }
    }
}

// Chen so x kiem tra co phan tru trung hay khong
void ChenXkiemtra(int a[][10], int n, int m, int x)
{
	int vtdong,vtcot;
	int dem = 0;
	for(int i =0; i<n; i++)
	{
		for(int j =0; j<m; j++)
		{
			if(a[i][j] == x)
			{
				cout << i << "." << j << "\t";
				dem+=1;
			}
		}
	}
	cout << "\nCo " << dem << " phan tu trung voi so " << x;
}


void Dich180(int a[10][10], int n, int m)
{
    for (int i = 0; i < n / 2; i++) 
	{
        for (int j = 0; j < m; j++) 
		{
            int tam = a[i][j];
            a[i][j] = a[n - i - 1][m - j - 1];
            a[n - i - 1][m - j - 1] = tam;
        }
    }
    if (n % 2 == 1)
	{
        for (int j = 0; j < m / 2; j++)
		{
            int tam = a[n/2][j];
            a[n/2][j] = a[n/2][m - j - 1];
            a[n/2][m - j - 1] = tam;
        }
    }
}

void Dich90SangTrai(int a[10][10], int n, int m)
{
	for(int i=0 ; i<n; i++){
		for(int j=0; j<m; j++){
			cout << a[j][n-i-1] << "\t";
		}
		cout << endl;
	}
}

void Dich90SangPhai(int a[10][10], int n, int m)
{
	for(int i=0 ; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout << a[m-j-1][i] << "\t";
		}
		cout << endl;
	}
}


//============================================
// BAI TAP CHUOI KY TU
//============================================
string s;
//Vi tri ngan cach ho - ten
int DauPhay()
{
    int len = s.length();
    for (int i = 0; i < len; i++)
	{
        if (s[i] == ',') {
            return i;
        }
    }

}
//Doi dau '-' --> ' '
void DoiDauCach()
{
    int len = s.length();
    for (int i = 0; i < len; i++)
	{
        if (s[i] == '-') {
            s[i] = ' ';
        }
    }
}
//In hoa chua cai dau va in thuong cac chu con lai
void ChuanHoa() {
    for (int i = 0; i < s.length(); i++) {
        if (i==0 || i > 0 && s[i - 1] == ' ') {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] -= 32;
            }
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }
        }
    }
}



void XoaBotKhoangTrangDuThua() {
    // Xóa khoảng cách dư thừa ở đầu và cuối chuỗi
    while (!s.empty() && s.front() == ' ')
        s.erase(s.begin());
    while (!s.empty() && s.back() == ' ')
        s.pop_back();

    // Xóa khoảng cách dư thừa ở giữa chuỗi
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            int j = i + 1;
            while (j < s.length() && s[j] == ' ')
                s.erase(j, 1);
        }
    }
}


void KhoangCach(int a[100], int n, int x){
	for(int i = 0; i<n; i++){
		float tb = 0.0;
		tb = float(x+a[i])/2;
		cout << "\nKhoang cach tu " << x << " den " << a[i] << "=" << tb;
	}
}

int TimGiaTriGanNhat(int a[100], int n, int x){
	int vitri;
	int gannhat = ((x+a[0])/2)%2;
	for(int i =0 ; i<n; i++){
		if(((x+a[i])/2)%2 < gannhat)
				gannhat = ((x+a[i])/2)%2;
				vitri = a[i];
	}
	return vitri;
}


int Tong(int a[100], int n){
	int tong = 0;
	for(int i =0; i<n; i++){
		if( i%2==0 && a[i]%2!=0)
			tong+=a[i];
	}
	return tong;
}

void Nhap(int a[100][100], int n)
{
	for(int i = 0; i<n ; i++){
		for(int j =0; j<n; j++){
			cout << "[" << i << "][" << j <<  "]=";
			cin >> a[i][j];
		}
	}
}

void Xuat(int a[100][100], int n)
{
	for(int i = 0; i<n ; i++){
		for(int j =0; j<n; j++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}


int TongCheoPhu(int a[100][100], int n){
	int tong = 0;
	for(int i=0; i<n; i++){
		tong+=a[i][n-i-1];
	}
	return tong;
}

bool KT(int a[100][100], int n){
	int tangdan = a[0][2];
	bool co = false;
	for(int i =1; i<n; i++){
		if(a[i][n-i-1] < tangdan)
			co = true;
		else
			co = false;
	}
	if(co)
		return true;
	else
		return false;
}

int main(){

//	int a[N];
//	int b[N][N];
//	int n, i, j;
//	cout << "Nhap so phan tu N=";
//	cin >> n;
//	i = 0;
//	//Nhap mang khong tang
//	cout << "Nhap phan tu thu 1="; cin >> a[i];
//	i++;
//	while(i<n){
//		a[i] = a[i-1]+1;
//		while(a[i] > a[i-1]){
//			cout << "\nNhap phan tu thu " << i+1 << "<=" << a[i-1] << ":";
//			cin >> a[i];
//		}
//		i++;
//	}

	int a[100];
	int n = 5;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\n";
	Xuat(a, n);
	return 0;
}