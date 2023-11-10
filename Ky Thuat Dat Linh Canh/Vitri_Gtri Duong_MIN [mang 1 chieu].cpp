#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: "; cin>>n;
	double a[n];
	cout<<"Nhap cac phan tu cua mang: \n";
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu [ "<<i<<"]: ";
		cin>>a[i];
	}
	/* su dung linh canh de tim gia tri duong nho nhat
	va vi tri cua no trong mang */
	double min = INT_MAX;
	int vitri_min = -1;
	for(int i = 0; i<n; i++)
	{
		if( a[i] > 0 && a[i] < min)
			min = a[i];
			vitri_min = i;
	}
	//kiem tra va xuat ket qua
	if(vitri_min != -1  )
	{
		cout<<"Gia tri DUONG NHO NHAT trong mang la: "<<min;
		cout<<"\nVI TRI cua gia tri DUONG NHO NHAT trong mang la: "<<vitri_min;
	}
	else if( vitri_min <= -1)
	{
		cout<<"Khong co gia tri duong";
	}
}