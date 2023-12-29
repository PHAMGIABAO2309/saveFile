#include<iostream>
#include<iomanip>
using namespace std;
struct SINHVIEN 
{
	string masv;
	string ten;
	long namsinh;
	float toan, ly, hoa;
	float dtb;
};
void nhapthongtin(SINHVIEN a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cin.ignore();
		cout<<"Nhap thong tin sinh vien thu "<<i+1<<": ";
		cout<<"\n Nhap ma sinh vien: ";
		getline(cin,a[i].masv);
		cout<<"Nhap ten sinh vien: ";
		getline(cin,a[i].ten);
		cout<<"Nhap nam sinh: ";
		cin>>a[i].namsinh;
		do
		{
			cout<<"Nhap diem toan: "; cin>>a[i].toan;
		} 	while ( !(a[i].toan >=0 && a[i].toan <= 10 ) );
		do
		{
			cout<<"Nhap diem ly: "; cin>>a[i].ly;
		} 	while (!(a[i].ly >=0 && a[i].ly <= 10) );
		do
		{
			cout<<"Nhap diem hoa: "; cin>>a[i].hoa;
		} 	while ( !(a[i].hoa >=0 && a[i].hoa <= 10));
		a[i].dtb = (a[i].toan + a[i].ly + a[i].hoa)/3;
	}
	cout<<"\n";
}
void xuatthongtin(SINHVIEN a[], int n)
{
	cout<<setw(5)<<"Ma sinh vien"<<setw(20)<<"Ten sinh vien"<<setw(20)<<"Nam Sinh"<<setw(15)<<"Diem Toan"<<setw(15)<<"Diem Ly"<<setw(15)<<"Diem Hoa"<<setw(15)<<"Diem TB"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<setw(5)<<a[i].masv<<setw(20)<<a[i].ten<<setw(20)<<a[i].namsinh<<setw(15)<<a[i].toan<<setw(15)<<a[i].ly<<setw(15)<<a[i].hoa<<fixed << setprecision(2)<<setw(15)<<a[i].dtb<<endl;
	}
}
void svcodtbmax(SINHVIEN a[], int n)
{
	cout<<"\n";
	float max = a[0].dtb;
	int vitri = 0;
	for(int i=1; i<n; i++)
	{
		if ( a[i].dtb > max)
			max = a[i].dtb;
			vitri = i;
	}
	cout<<"\nsinh vien  co diem trung binh cao nhat la: "<<max;
}
void svcodtblonhon5vacotuoinhonhat(SINHVIEN a[], int n)
{
	long tuoimin = a[0].namsinh;
	int vitri = 0;
	for(int i=1; i<n; i++)
	{
		int tuoi = a[i].namsinh;
		if(a[i].dtb > 5 && tuoi < tuoimin)
		{
			tuoimin = tuoi;
			vitri = i;
		}
		cout<<"\n sinh vien co dtb ( > 5 ) & co tuoi nho nhat: \n ";
		xuatthongtin(a + vitri ,1);
	}
}
void sapxepdtbtangdan(SINHVIEN a[], int n)
{
	cout<<"\n";
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1;j++)
		{
			if(a[i].dtb > a[j+1].dtb)
			{
				swap(a[j], a[j+1]);
			}
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong sinh vien: "; cin>>n;
	SINHVIEN a[n];
	nhapthongtin(a,n);
	xuatthongtin(a,n);
	svcodtbmax(a,n);
	svcodtblonhon5vacotuoinhonhat(a,n);
	sapxepdtbtangdan(a,n);
	cout<<"\n Danh sach sinh vien co dtb tang dan: \n ";
	xuatthongtin(a,n);
}