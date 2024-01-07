#include<iostream>
#include<math.h>
using namespace std;
struct Diem
{
	double x,y;
};
void Nhap(Diem &M)
{
	cout<<"Nhap toa do diem x: ";
	cin>>M.x;
	cout<<"Nhap toa do diem y: ";
	cin>>M.y;
}
void Xuat(Diem &M)
{
	cout<<"Toa do: "<<M.x<<","<<M.y<<endl;
}
float TinhKhoangCachGiua2Diem(Diem A, Diem B)
{
	return sqrt(pow(B.x - A.x,2) + pow(B.y - A.y,2));
}
Diem Doixungquagoctoado(Diem M)
{
	Diem kq;
	kq.x = -M.x;
	kq.y = -M.y;
	return kq;
}
Diem Doixungquatruchoanh(Diem M)
{
	Diem kq;
	kq.x = -M.x;
	kq.y = M.y;
	return kq;
}
int main()
{
	Diem A,B;
	cout<<"Nhap toa do diem A: \n";
	Nhap(A);
	cout<<"Nhap toa do diem B: \n";
	Nhap(B);
	Xuat(A);
	Xuat(B);
	cout<<"\nKhoang cach giua 2 diem: "<<TinhKhoangCachGiua2Diem(A,B);
	Diem doixungA = Doixungquagoctoado(A);
	cout<<"\nDiem doi xung qua goc toa do A: "<<doixungA.x<<","<<doixungA.y;
	Diem doixungB = Doixungquagoctoado(B);
	cout<<"\nDiem doi xung qua goc toa do B: "<<doixungB.x<<","<<doixungB.y;
	
}