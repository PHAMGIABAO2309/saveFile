#include<iostream>
using namespace std;
struct PHANSO
{
	double tu,mau;
};
void Nhap(PHANSO DS[], int n )
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap vao phan so thu: "<<i+1<<": ";
		cout<<"\nNhap tu so: ";
		cin>>DS[i].tu;
		cout<<"Nhap mau so: ";
		cin>>DS[i].mau;
	}
}
void Xuat(PHANSO DS[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\n Phan so thu "<<i+1<<": \n";
		cout<<DS[i].tu<<"/"<<DS[i].mau;
	}
}
//HAM RUT GON PHAN SO
int UCLN(int a, int b)
{
	if(b==0) return a;
	return UCLN(b,a%b);
}
void RUTGON(PHANSO &PS)
{
	double ucln = UCLN(PS.tu, PS.mau);
	PS.tu /= ucln;
	PS.mau /= ucln;
}
//TÍNH TỔNG CÁC PHÂN SỐ CÓ TRONG MẢNG & TỐI GIẢN
PHANSO TONG(PHANSO DS[], int n)
{
	PHANSO S = {0,1};
	for(int i=0; i<n; i++)
	{
		S.tu = S.tu * DS[i].mau + DS[i].tu * S.mau;
		S.mau = S.mau * DS[i].mau;
		RUTGON(S);
	}
	return S;
} 
//TÌM PHÂN SỐ LỚN NHẤT TRONG MẢNG
PHANSO MAX(PHANSO DS[], int n)
{
	PHANSO psmax = DS[0];
	for(int i=0; i<n; i++)
	{
		if( DS[i].tu * psmax.mau > psmax.tu * DS[i].mau)
		{
			psmax = DS[i];
		}
	}
	return psmax;
}
//TÌM PHÂN SỐ NHỎ NHẤT TRONG MẢNG
PHANSO MIN(PHANSO DS[], int n)
{
	PHANSO psmin = DS[0];
	for(int i=0; i<n; i++)
	{
		if( DS[i].tu * psmin.mau < psmin.tu * DS[i].mau)
		{
			psmin = DS[i];
		}
	}
	return psmin;
}
//SAP XEP TANG DAN
void SAPXEPTANGDAN(PHANSO DS[],int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1;j++)
		{
			if(DS[j].tu * DS[j+1].mau > DS[j+1].tu * DS[j].mau)
			{
				PHANSO tam = DS[j];
				DS[j] = DS[j+1];
				DS[j+1] = tam;
			}
		}
	}
	Xuat(DS,n);
}
void SAPXEPGIAMDAN(PHANSO DS[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1;j++)
		{
			if(DS[j].tu * DS[j+1].mau < DS[j+1].tu * DS[j].mau)
			{
				PHANSO tam = DS[j];
				DS[j] = DS[j+1];
				DS[j+1] = tam;
			}
		}
	}
	Xuat(DS,n);
}
int main()
{
	PHANSO DS[100];
	int n;
	cout<<"Nhap so luong phan so: "; cin>>n;
	Nhap(DS,n);
	Xuat(DS,n);
	PHANSO S = TONG(DS,n);
	cout<<"\n Tong phan so: ("<<S.tu<<"/"<<S.mau<<")";
	PHANSO psmax = MAX(DS,n);
	cout<<"\n Phan so lon nhat: ("<<psmax.tu<<"/"<<psmax.mau<<")";
	PHANSO psmin = MIN(DS,n);
	cout<<"\n Phan so nho nhat: ("<<psmin.tu<<"/"<<psmin.mau<<")";
	cout<<"\n Phan so sap xep tang dan: ";
	SAPXEPTANGDAN(DS,n);
	cout<<"\n Phan so sap xep giam dan: ";
	SAPXEPGIAMDAN(DS,n);
}