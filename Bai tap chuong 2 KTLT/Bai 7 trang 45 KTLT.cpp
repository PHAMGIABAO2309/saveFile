#include<iostream>
using namespace std;
struct date
{
	int gio,phut,giay;
};

//d?nh nghia hàm 'KetQua' ( v?i d?i s? là 'x' có ki?u d? li?u là 'date' )
void KetQua(date x)
{
	string strgio = to_string(x.gio);
	if(strgio.size() == 1)
		strgio = '0' + strgio;
	string strphut = to_string(x.phut);
	if(strphut.size() == 1)
		strphut = '0' + strphut;
	string strgiay = to_string(x.giay);
	if(strgiay.size() == 1)
		strgiay = '0' + strgiay;
	cout<<strgio<<":"<<strphut<<":"<<strgiay;
}
int main()
{
	int gio,phut,giay;
	int giaythem;
	cout<<"Nhap gio: "; cin>>gio;
	cout<<"Nhap phut: ";cin>>phut;
	cout<<"Nhap giay: ";cin>>giay;
	cout<<"Nhap giay muon cong them: "; cin>>giaythem;
	giay += giaythem; //gán giá tr? c?a bi?n 'giay' s? du?c tang thêm 'giaythem'
	phut += giay/60;
	gio += phut/60;
	/*su dung chia lay phan du de dam bao rang
	cac thanh phan deu nam trong khoang tu 0 den 59 */
	giay %= 60;
	phut%=60;
	gio%=24;
	date x;
	x.gio = gio;
	x.phut = phut;
	x.giay = giay;
	KetQua(x);
}