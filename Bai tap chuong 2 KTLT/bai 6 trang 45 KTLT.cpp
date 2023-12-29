#include<iostream>
using namespace std;
int main()
{
	int K,T;
	double m;
	cout<<"Nhap so tien goc T: "; cin>>T;
	cout<<"Nhap so thang K: "; cin>>K;
	cout<<"Nhap so lai suat m: "; cin>>m;
	m = m / 100;
	for(int i=0; i<K; ++i)
	{
		T = T + T * m;
	}
	cout<<"So tien sau "<< K<<" thang la: "<<T;
}