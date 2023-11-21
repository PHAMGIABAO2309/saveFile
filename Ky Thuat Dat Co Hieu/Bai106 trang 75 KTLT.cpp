#include<iostream>
#include<cmath>
using namespace std;
struct DIEM
{
	float x,y;
};
//--cau A
DIEM timdoixungX(DIEM D) //X: tung do
{
	DIEM doixung;
	doixung.x = -D.x;
	doixung.y = D.y;
	return doixung;
}
DIEM timdoixungY(DIEM D) //Y: hoanh do
{
	DIEM doixung;
	doixung.x = D.x;
	doixung.y = -D.y;
	return doixung;
}
DIEM timdoixungO(DIEM D) //O: toa do tam
{
	DIEM doixung;
	doixung.x = -D.x;
	doixung.y = -D.y;
	return doixung;
}
//--cau B
DIEM tinhtong(DIEM A, DIEM B)
{
	DIEM tong;
	tong.x = A.x + B.x;
	tong.y = A.y + B.y;
	return tong;
}
DIEM tinhhieu(DIEM A, DIEM B)
{
	DIEM hieu;
	hieu.x = A.x - B.x;
	hieu.y = A.y - B.y;
	return hieu;
}
float tinhtich(DIEM A, DIEM B)
{
	float tich = ( (A.x * B.x) + ( A.y * B.y));
	return tich;
}
//--cau c
float tinhkhoangcach(DIEM A,DIEM B)
{
	float kc = sqrt( pow(B.x - A.x,2) + pow(B.y - A.y,2) );
	return kc;
}
int main()
{
	DIEM A;
	cout<<"Nhap toa do diem A: "; cin>>A.x>>A.y;
	DIEM tungdo = timdoixungX(A);
	DIEM hoanhdo = timdoixungY(A);
	DIEM toadotam = timdoixungO(A);
	cout<<"Doi xung Tung do cua A: ("<<tungdo.x<<" , "<<tungdo.y<<") \n";
	cout<<"Doi xung Hoanh do cua A: ("<<hoanhdo.x<<" , "<<hoanhdo.y<<") \n";
	cout<<"Doi xung Toa Do Tam cua A: ("<<toadotam.x<<" , "<<toadotam.y<<") \n";
	cout<<"\n";
	DIEM B;
	cout<<"Nhap toa do diem B: "; cin>>B.x>>B.y;
	DIEM tong = tinhtong(A,B);
	DIEM hieu = tinhhieu(A,B);
	float tich = tinhtich(A,B);
	float kc = tinhkhoangcach(A,B); 
	cout<<"Tong cua 2 diem: ("<<tong.x<<" , "<<tong.y<<") \n";
	cout<<"Hieu cua 2 diem: ("<<hieu.x<<" , "<<hieu.y<<") \n";
	cout<<"Tich cua 2 diem: "<<tich<<"\n";
	cout<<"Khoang cach cua 2 diem: "<<kc;
}