#include<iostream>
using namespace std;
struct phanso
{
	int tu,mau;
};
int ucln(int a,int b)
{
	if(b==0) return a;
	return ucln(b, a%b);
}
void toigianphanso(phanso &p)
{
	int UCLN = ucln(p.tu, p.mau);
	p.tu = p.tu/UCLN;
	p.mau = p.mau/UCLN;
}
void Nhap(phanso a[], int &n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phap so thu ["<<i+1<<"]: ";
		cin>>a[i].tu>>a[i].mau;
	}
}
//--cau a
phanso tong(phanso a[], int n)
{
	phanso s = { 0, 1};
	for(int i=0; i<n; i++)
	{
		s.tu = s.tu * a[i].mau + a[i].tu * s.mau;
		s.mau = s.mau * a[i].mau;
		toigianphanso(s);
	}
	return s;
}
//--cau b
phanso timphansoMAX(phanso a[], int n)
{
	phanso max = a[0];
	for(int i=0; i<n; i++)
	{
		float ps = (float)a[i].tu/a[i].mau;
		float psMAX = (float)max.tu/max.mau;
		if(ps > psMAX)
		{
			max = a[i];
		}
	}
	return max;
}
phanso timphansoMIN(phanso a[],int n)
{
	phanso min = a[0];
	for(int i=0; i<n; i++)
	{
		float ps = (float)a[i].tu/a[i].mau;
		float psMIN = (float)min.tu/min.mau;
		if(ps < psMIN)
		{
			min = a[i];
		}
	}
	return min;
}
void Xuat(phanso a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\n";
		cout<<a[i].tu<<"/"<<a[i].mau;
	}
}
//--cau c
phanso sxtangdan(phanso a[],int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=j+1; j<n; j++)
		{
			float ps1 = (float)a[i].tu/a[i].mau;
			float ps2 = (float)a[j].tu/a[j].mau;
			if(ps1 > ps2)
			{
				phanso tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}
int main()
{
	phanso a[100];
	int n;
	cout<<"Nhap so luong phan so: "; cin>>n;
	Nhap(a,n);
	Xuat(a,n);
	phanso s = tong(a,n);
	phanso max = timphansoMAX(a,n);
	phanso min = timphansoMIN(a,n);
	cout<<"\nTong cac phan so: "<<s.tu<<"/"<<s.mau;
	cout<<"\nPhan so lon nhat: "<<max.tu<<"/"<<max.mau;
	cout<<"\nPhan so nho nhat: "<<min.tu<<"/"<<min.mau;
	sxtangdan(a,n);
	cout<<"\nMang sau khi sap xep tang dan: ";
	Xuat(a,n);
}