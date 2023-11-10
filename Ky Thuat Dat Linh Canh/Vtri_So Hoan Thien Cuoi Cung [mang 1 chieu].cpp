#include <iostream>
#include <cmath>

using namespace std;

bool sohoanhao(int n) {
  int s = 0;
  for (int i = 1; i <= n / 2; i++)
	{
    	if (n % i == 0)
      	s += i;
  	}
  return s == n;
}

int timvitri_sohoanhao_cuoicung(int a[], int n) 
{
  int vitri = -1;
  for (int i = 0; i < n; i++) 
  {
    if (sohoanhao(a[i])) 
      vitri = i;
  }
  if (vitri != -1) 
  {
  
    cout << "So Hoan Thien Cuoi Cung trong mang la: " << a[vitri] << endl;
    cout << "Vi tri cua gia tri So Hoan Thien cuoi cung: " << vitri << endl;
	}
  else 
  {
  
    cout << "Mang khong co so hoan thien." << endl;
	}	
}

int main() {
  int n;
  cout << "Nhap so luong cac phan tu trong mang mot chieu: ";
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cout << "Nhap phan tu thu [" << i << "]: ";
    cin >> a[i];
  }

  int vitri = timvitri_sohoanhao_cuoicung(a, n);

  
}
