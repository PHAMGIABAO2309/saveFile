//tap tin, ghi du lieu len tap tin van ban
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	//khai bao va nhap vao 1 mang so nguyen gom n phan tu
	//luu noi dung cua mang nay len tap tin van ban ( tren dia )
	int a[100];
	int n;
	//nhap lieu
	cout<<"Nhap n: "; cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu "<<i<<": ";
		cin>>a[i];
	}
	//luu mang len tap tin
	FILE *fp; //khai bao con tro tap tin
				//dung de thao tac tren 1 tap tin
	//1. Mo tap tin ( de ghi )
	fp = fopen("F:/OUTPUT.TXT","wt"); //mo tap tin van ban de ghi
	//1.1. kiem tra xem co mo duoc hay khong
	if ( fp == NULL)
	{
		cout<<"Khong mo duoc tap tin!"<<endl; //bao loi
		return -1;
	}
	//2.Mo thanh cong --> doc/ghi
	fprintf(fp, "%d\n", n);
	//dong tiep thoe ghi cac phan tu cua mang, moi phan tu chiem 5 cho
	for(int i=0; i<n; i++)
	{
		fprintf(fp, "%5d", a[i]);
	}
	//3.dong tap tin lai
	fclose(fp);
}