#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int a[][100], int n, int m)
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
void Xuat(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
bool KTHT( int n)
{
	int s = 0;
	for(int i=1; i<=n/2; i++)
		if(n%i==0)
			s+=i;
	return s==n;
}
bool KTNT(int n)
{
	if(n <= 1 )
		return false;
	for(int i=2; i*i <= n; i++)
		if(n%i==0)
			return false;
	return true;
}
//TINH TICH CAC GIA TRI LE
int BAI55(int a[][100], int n, int m)
{
	int s = 1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j] % 2 != 0)
			{
				s *= a[i][j];
			}
		}
	}
	return s;	
}
//TINH TONG CAC GIA TRI TREN 1 DONG TRONG MA TRAN
void BAI56(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		int s = 0;
		for(int j=0; j<m; j++)
		{
			s+=a[i][j];
		}
		cout<<"\nDong "<< i << " co tong la: "<<s<<endl;
	}
}
//TINH TICH CAC GIA TRI DUONG TREN 1 COT
void BAI57(int a[][100], int n, int m)
{
	for(int j=0; j<m; j++)
	{
		int s = 1;
		for(int i=0; i<n; i++)
		{
			if(a[i][j] > 0 )
				s*=a[i][j];
		}
		cout<<"\nCot "<< j << " co tong la: "<<s<<endl;
	}
}
//TINH TONG CAC GIA TRI DUONG TREN 1 DONG
void BAI58(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		int s = 0;
		for(int j=0; j<m; j++)
		{
			if( a[i][j] > 0)
				s+=a[i][j];
		}
		cout<<"\nDong "<< i << " co tong la: "<<s<<endl;
	}
}
//TINH TRUNG BINH CONG CAC SO DUONG
float BAI59(int a[][100], int n, int m)
{
	float s = 0.0;
	int sophantu = n*m; //sophantu = sodong * socot
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( a[i][j] > 0)
				s+=a[i][j];
		}
	}
	s = s/sophantu;
	return s;
}
//TINH TONG CAC GIA TRI NAM TREN BIEN
int BAI60(int a[][100], int n, int m)
{
	int s = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( i == 0 || j == 0 || i == n -1 || j == m - 1)
				s +=a[i][j];
		}
	}
	return s;
}
//TINH TONG CAC GIA TRI LE TREN 1 COT
void BAI62(int a[][100], int n, int m)
{
	for(int j=0; j<m; j++)
	{
		int s = 0;
		for(int i=0; i<n; i++)
		{
			if( a[i][j] % 2 != 0)
			{
				s += a[i][j];
			}
		}
		cout<<"\n Cot " << j << " co tong: "<<s<<endl;
	}
}
//TINH TONG CAC SO HOAN THIEN 
int BAI63(int a[][100], int n, int m)
{
	int s = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(KTHT(a[i][j]) )
				s += a[i][j];
		}
	}
	return s;
}
//DEM SO LUONG SO DUONG TRONG MA TRAN
int BAI64(int a[][100], int n, int m)
{
	int dem = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( a[i][j] > 0)
				dem++;
		}
	}
	return dem;
}
//DEM SO LUONG SO NGUYEN TO TRONG MA TRAN
int BAI65(int a[][100], int n, int m)
{
	int dem = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( KTNT(a[i][j]))
				dem++;
		}
	}
	return dem;
}
//DEM TAN SO XUAN HIEN CUA 1 GIA TRI X ?
int BAI66(int a[][100], int n, int m, int x)
{
	int dem = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( a[i][j] == x)
				dem++;
		}
	}
	return dem;
}
//DEM SO LUONG SO DUONG TREN 1 HANG
void BAI67(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		int dem = 0;
		for(int j=0; j<m; j++)
		{
			if( a[i][j] > 0)
				dem++;
		}
		cout<<"\n Hang "<<i<< " co so luong so duong: "<<dem<<endl;
	}
}
//DEM SO LUONG SO HOAN THIEN TREN 1 HANG
void BAI68(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		int dem = 0;
		for(int j=0; j<m; j++)
		{
			if( KTHT(a[i][j]) )
				dem++;
		}
		cout<<"\n Hang "<<i<< " co so luong so hoan thien: "<<dem<<endl;
	}
}
//DEM SO LUONG SO AM TREN 1 COT
void BAI69(int a[][100], int n, int m)
{
	for(int j=0; j<m; j++)
	{
		int dem = 0;
		for(int i=0; i<n; i++)
		{
			if( a[i][j] < 0 )
				dem++;
		}
		cout<<"\n Cot "<<j<< " co so luong so am: "<<dem<<endl;
	}
}
//DEM SO LUONG SO DUONG TREN BIEN MA TRAN
int BAI70(int a[][100], int n, int m)
{
	int dem = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( i == 0 || j == 0 || i == n-1 || j == m-1)
			{
				if( a[i][j] > 0)
				{
					dem++;
				}
			}
		}
	}
	return dem;
}
//KIEM TRA MA TRAN CO TON TAI SO DUONG ?
int BAI71(int a[][100], int n, int m)
{
	bool kiemtra = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if ( a[i][j] > 0 )
				return 1;
		}
	}
	return 0;
}
//KIEM TRA CO TON TAI SO HOAN THIEN ?
bool BAI72(int a[][100], int n, int m)
{
	bool kiemtra = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(KTHT(a[i][j]))
				return 1;
		}
	}
	return 0;
}
//KIEM TRA MA TRAN CO TON TAI SO LE ?
bool BAI73(int a[][100], int n, int m)
{
	bool kiemtra = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( a[i][j] % 2 != 0 )
				return 1;
		}
	}
	return kiemtra;
}
//KIEM TRA MA TRAN CO TOAN SO DUONG ?
int BAI74(int a[][100], int n, int m)
{
	bool kiemtra = 1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j] <= 0 )
			{
				kiemtra = 0;
				break;
			}
		}
		if( !kiemtra)
		{
			break;
		}
	}
	return kiemtra;
}
//LIET KE CHI SO CAC DONG CHUA TOAN GIA TRI AM
void BAI75(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		int dem = 0;
		for(int j=0; j<m; j++)
		{
			if(a[i][j] < 0)
			{
				dem++;
			}
		}
		if ( dem == m )
			cout<<"Dong "<< i<<" chua toan gia tri am "<<endl;
	}
}
//LIET KE CHI SO CAC DONG CHUA TOAN GIA TRI CHAN
void BAI76(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		int dem = 0;
		for(int j=0; j<m; j++)
		{
			if ( a[i][j] % 2 == 0)
			{
				dem++;
			}
		}
		if(dem == m )
			cout<<"Dong "<<i<< " co chua gia tri toan chan"<<endl;
	}
}
//LIET KE CHI SO CAC DONG CHUA SO NGUYEN TO
void BAI77(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		int dem = 0;
		for(int j=0; j<m; j++)
		{
			if ( KTNT(a[i][j]))
			{
				dem++;
			}
		}
		if(dem > 0 )
			cout<<"Dong "<<i<< " co chua so nguyen to"<<endl;
	}
}
//LIET KE CAC COT CO CHUA SO CHINH PHUONG
bool KTCP(int n)
{
	int can = sqrt(n);
	return (can * can == n);
}
void BAI78(int a[][100], int n, int m)
{
	for(int j=0; j<m; j++)
	{
		bool tontai = false;
		for(int i=0; i<n; i++)
		{
			if ( KTCP(a[i][j]))
			{
				tontai = true;
			}
		}
		if(tontai )
			cout<<"Cot "<<j<< " co chua so Chinh Phuong"<<endl;
	}
}
//TIM SO CHAN DAU TIEN XUAT HIEN TRONG MA TRAN
int BAI80(int a[][100], int n, int m)
{
	bool tontai = false;
	int sochandautien = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( a[i][j] % 2 == 0 )
			{
				tontai = true;
				sochandautien = a[i][j];
				break;
			}	
		}
		if(tontai)
		{
			break;
		}
	}
	return sochandautien;
}
//TIM GIA TRI LON NHAT TRONG MA TRAN
int BAI81(int a[][100], int n, int m)
{
	int max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}
//TIM GIA TRI DUONG DAU TIEN
int BAI82(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( a[i][j] > 0 )
				return a[i][j];
		}
	}
	return 0;
}
//TIM GIA TRI AM LON NHAT
int BAI83(int a[][100], int n, int m)
{
	int max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j] < 0 &&  a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}
//LIET KE CAC DONG CHUA GIA TRI LON NHAT
void BAI84(int a[][100], int n, int m)
{
	int max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j] > max )
				max = a[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		bool dung = false;
		for(int j=0; j<m; j++)
		{
			if(a[i][j] == max)
				dung = true;
		}
		if(dung)
			cout<<"Dong "<<i<<" chua gia tri lon nhat "<<max;
	}
}
//TIM GIA TRI LON NHAT TREN 1 DONG
void BAI85(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		int max = INT_MIN;
		for(int j=0; j<m; j++)
		{
			if(  a[i][j] > max)
				max = a[i][j];
		}
		cout<<"Dong "<<i<<" chua gia tri lon nhat: "<<max<<endl;
	}
}
//TIM GIA TRI NHO NHAT TREN 1 COT
void BAI86(int a[][100], int n, int m)
{
	for(int j=0; j<m; j++)
	{
		int min = INT_MAX;
		for(int i=0; i<n; i++)
		{
			if ((a[i][j]) < min)
			{
				min = a[i][j];
			}
		}
		cout<<"Cot "<<j<<" chua gia tri nho nhat: "<<min<<endl;
	}
}
//TIM SO NGUYEN TO LON NHAT
int BAI88(int a[][100], int n, int m)
{
	int max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m;j++)
		{
			if(KTNT(a[i][j]) && a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}
//TIM SO HOAN THIEN NHO NHAT
int BAI89(int a[][100], int n, int m)
{
	int min = INT_MAX;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(KTHT(a[i][j]) && a[i][j] < min)
				min = a[i][j];
		}
	}
	return min;
}
//LIET KE DONG CO NHIEU SO NGUYEN TO
int BAI90(int a[][100], int n, int m)
{
	int nhieunhat = INT_MIN;
	int dongnhieunhat = -1;
	for(int i=0; i<n;i++)
	{
		int dem = 0;
		for(int j=0; j<m; j++)
		{
			if(KTNT(a[i][j]))
				dem++;
		}
		if ( dem > nhieunhat)
		{
			nhieunhat = dem;
			dongnhieunhat = i;
		}
	}
	return dongnhieunhat;
}
//TINH TONG CAC PHAN TU TAM GIAC TREN
int BAI91(int a[][100], int n, int m)
{
	int s = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if (  i < j)
				s+=a[i][j];
		}
	}
	return s;
}
//TINH TONG CAC PHAN TU TAM GIAC DUOI
int BAI92(int a[][100], int n, int m)
{
	int s = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if (  i > j)
				s+=a[i][j];
		}
	}
	return s;
}
//TINH TONG CAC PHAN TU TREN DUONG CHEO CHINH
int BAI93(int a[][100], int n, int m)
{
	int s = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if ( i == j )
				s+=a[i][j];
		}
	}
	return s;
}
//TINH TONG CAC PHAN TU TREN DUONG CHEO PHU
int BAI94(int a[][100], int n, int m)
{
	int s =0;
	for(int i=0; i<n; i++)
	{
		if( a[i][n-1-i])
			s+=a[i][n-i-1];
	}
	return s;
}
//TINH TONG CAC PHAN TU CHAN NAM TREN BIEN MA TRAN
int BAI95(int a[][100], int n, int m)
{
	int s = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if ( i==0 || j==0 || i == n - 1 || j == m - 1)
				if(a[i][j] % 2 == 0 )
					s += a[i][j];
		}
	}
	return s;
}
//TIM GIA TRI NHO NHAT TRONG TAM GIAC DUOI
int BAI96(int a[][100], int n, int m)
{
	int min = INT_MAX;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( (i > j) && a[i][j ] < min)
				min = a[i][j];
		}
	}
	return min;		
}
//TIM GIA TRI LON NHAT TREN DUONG CHEO CHINH
int BAI97(int a[][100], int n, int m)
{
	int max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( (i==j) && a[i][j] > max )
				max = a[i][j];
		}
	}
	return max;
}
//TIM GIA TRI LON NHAT TREN DUONG CHEO PHU
int BAI98(int a[][100], int n, int m)
{
	int max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		if( a[i][n-i-1] && a[i][n-i-1] > max )
			max = a[i][n-i-1];
	}
	return max;
}
//DEM SO LUONG CAP GIA TRI DOI XUNG NHAU QUA DUONG CHEO CHINH
bool KTDX(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( a[i][j] != a[j][i])
				return false;
		}
	}
	return true;
}
int BAI100(int a[][100], int n, int m)
{
	int dem = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(KTDX(a,n,m) && ( i==j))
				dem++;
		}
	}
	return dem;
}
//DEM SO LUONG GIA TRI DUONG TREN DUONG CHEO CHINH
int BAI101(int a[][100], int n, int m)
{
	int dem = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if((a[i][j] > 0) && ( i==j))
				dem++;
		}
	}
	return dem;
}

int main()
{
	int n,m;
	cout<<"Nhap so dong: "; cin>>n;
	cout<<"Nhap so cot: "; cin>>m;
	int a[100][100];
	Nhap(a,n,m);
	Xuat(a,n,m);
	cout<<"Ket qua: "<<BAI101(a,n,m);
	//BAI86(a,n,m);
}