//MANG 2 CHIEU

#include <iostream>
using namespace std;

void Nhap(int a[100][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"Nhap phan tu thu ["<<i<<"] ["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
}
void Xuat(int a[100][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j] << "\t";
		}
		cout << endl;
	}
}


//TONG CAC SO DUONG CO TRONG MA TRAN
int BAI54(int a[100][100], int n, int m)
{
	int s = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j] > 0 )
			{
				s += a[i][j];
			}
		}
	}
	return s;
}

//TICH CAC GIA TRI LE
int BAI55(int a[][100], int n, int m)
{
	int s = 1;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j]%2!=0)
				s*=a[i][j];
		}
	}
	return s;
}

//TONG CAC GIA TRI TREN 1 Dong
void BAI56(int a[][100], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		int s = 0;
		for(int j = 0; j < m; j++)
		{
			s+=a[i][j];
		}
		cout << "Tong dong " << i + 1 << "=" << s << endl;
	}
}

void BAI58(int a[][100], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		int s = 0;
		for(int j = 0; j < m; j++)
		{
			if(a[i][j]>0)
				s+=a[i][j];
		}
		cout << "Tong dong " << i + 1 << "=" << s << endl;
	}
}
float BAI59(float b[][100], int n, int m)
{
	float s = 0.0;
	int sophantu = n*m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(b[i][j]>0)
				s+=b[i][j];
		}
	}
	s = s/sophantu;
	return s;
}
//IN TONG CAC PHAN TU NAM TREN DUONG BIEN MA TRAN
int BAI60(int a[][100], int n, int m)
{
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(i==0 || j==0 || i==n-1 || j==m-1)
				tong+=a[i][j];
		}
	}
	return tong;
}

//DEM SO LUONG SO DUONG
int BAI64(int a[][100], int n, int m)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j]>0)
				dem++;
		}
	}
	return dem;
}

//DEM SO LUONG SO NGUYEN TO
int KTNT(int n)
{
	int dem = 0;
	if(n<2)
		return 0;
	for(int i = 2; i<n;i++)
	{
		if(n%i==0)
			dem++;
	}
	if(dem==0)
		return 1;
	else
		return 0;
}

int BAI65(int a[][100], int n, int m)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(KTNT(a[i][j]))
				dem++;
		}
	}
	return dem;
}

//DEM TAN SO XUAT HIEN X
int BAI66(int a[][100], int n, int m, int x)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j]==x)
				dem++;
		}
	}
	return dem;
}

//
int BAI70(int a[][100], int n, int m)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(i==0 || j==0 || i==n-1 || j==m-1)
				if(a[i][j]>0)
					dem++;
		}
	}
	return dem;
}

//==============================KI THUAT DAC CO HIEU
//KIEM TRA TON TAI SO DUONG
int BAI71(int a[][100], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j]>0)
				return 1;
		}
	}
	return 0;
}
//
int BAI72(int a[][100], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j]<0)
				return 0;
		}
	}
	return 1;
}
//LIET KE CHI SO CAC DONG CHUA TOAN GIA TRI AM
void BAI75(int a[][100], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		bool dung = true;
		for(int j = 0; j < m; j++)
		{
			if(a[i][j]>0)
				dung = false;
		}
		if(dung)
			cout << i << "\t";
	}
}
//LIET KE DONG CHUA CHI SO NGUYEN TO
void BAI76(int a[][100], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		bool dung = false;
		for(int j = 0; j < m; j++)
		{
			if(KTNT(a[i][j]))
				dung = true;
		}
		if(dung)
			cout << i << "\t";
	}
}
void BAI79(int a[][100], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		bool dung = false;
		for(int j = 0; j < m-1; j++)
		{
			if(a[i][j]>a[i][j+1])
				dung = true;
		}
		if(dung)
			cout << i << "\t";
	}
}
//KI THUAT DAT LINNH CANH
//Tim so chan xuat hien dau tien trong ma tran
int BAI80(int a[][100], int n, int m)
{
	bool tontai = true;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j]%2==0)
				return a[i][j];
			else
				tontai = false;
		}
	}
	if(!tontai)
		return 0;
}
//
int BAI81(int a[][100], int n, int m)
{
	int max = a[0][0];
	for(int i = 0; i < n; i++)
	{
		
		for(int j = 0; j < m; j++)
		{
			if(i==0 && j==0)
				j++;
			if(a[i][j]>max)
				max = a[i][j];
		}
	}
	return max;
}
//TIM GIA TRI AM LON NHAT
int BAI83(int a[][100], int n, int m)
{
	int max=INT_MIN;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j]<0 && a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	if(max=INT_MIN)
		return 0;
	return max;
}

//LIET KE CAC DONG CO GIA TRO LON NHAT
int BAI84(int a[][100], int n, int m)
{
	int max=INT_MIN;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		bool dung = false;
		for(int j = 0; j < m; j++)
		{
			if(a[i][j] == max)
				dung = true;
		}
		if(dung)
			cout << i << "\t";
	}

}

//TIM GIA TRI LON NHAT TRONG 1 DONG 
void BAI85(int a[][100], int n, int m)
{
	
	for(int i = 0; i < n; i++)
	{	
		int max = INT_MIN;
		for(int j = 0; j < m; j++)
		{
			if(a[i][j] > max)
				max = a[i][j];
		}
		cout << "Dong " << i << ":" << max << endl;
	}
}
//IN RA GIA TRI NHO NHAT TREN MOT COT
void BAI86(int a[][100], int n, int m)
{
	
	for(int j = 0; j < m; j++)
	{	
		int min = INT_MAX;
		for(int i = 0; i < n; i++)
		{
			if(a[i][j] < min)
				min = a[i][j];
		}
		cout << "Cot " << j << ":" << min << endl;
	}
}

//TIM SO NGUYEN TO LON NHAT TRONG MA TRAN
int BAI88(int a[][100], int n, int m)
{
	int max = INT_MIN;
	for(int i = 0; i < n; i++)
	{	
		for(int j = 0; j < m; j++)
		{
			if(KTNT(a[i][j]) && a[i][j]> max)
				max = a[i][j];
		}
	}
	return max;
}

//// Hàm kiểm tra xem một số có phải là số hoàn thiện hay không
bool KTHT(int x) {
    int dem = 1; // Bắt đầu với 1 vì mọi số đều chia hết cho 1
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            dem += i;
        }
    }
    return (dem == x);
}

// Hàm tìm số hoàn thiện nhỏ nhất trong ma trận
int BAI89(int a[][100], int n, int m) {
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (KTHT(a[i][j]) && a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    return (min == INT_MAX) ? -1 : min;
}

//TIM DONG CO NHIEU SO NGUYEN TO NHAT
int BAI90(int a[][100], int n, int m)
{
	int nhieunhat = INT_MIN;
	int dongnhieunhat = -1;
	
	for(int i = 0; i < n; i++)
	{	
		int dem=0;
		for(int j = 0; j < m; j++)
		{
			if(KTNT(a[i][j]))
				dem++;
		}
		if(dem>nhieunhat)
		{
			nhieunhat = dem;
			dongnhieunhat = i;
		}
	}
	return dongnhieunhat;
}

int BAI94(int a[][100], int n, int m)
{
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i][n-i-1])
			tong+=a[i][n-i-1];
	}
	return tong;
}
int main()
{
	int n, m;
	float b[100][100];
	cout<<"Nhap so dong: "; cin>>n;
	cout<<"Nhap so cot: "; cin>>m;
	int a[100][100];
	Nhap(a,n,m);
	Xuat(a,n,m);
	cout<<"\nKet qua: "<< BAI94(a,n,m);
	cout << endl;
//	BAI86(a, n, m);
}