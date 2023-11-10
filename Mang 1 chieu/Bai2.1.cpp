#include<iostream>
using namespace std;
//ham kiem tra so nguyen to
bool songuyento(int n)
{
	if(n <= 1)
		return false;
	for(int i = 2 ; i*i <= n;i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cout<<"Nhap so luong so nguyen: "; cin>>n;
	int a[100]; //khai bao mang
	for(int i = 0 ; i < n ; i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<" : ";
		cin>>a[i];
	}
	for(int i = 0 ; i < n ; i++)
	{
		cout<<a[i]<<" ";
	}
//================== CAU A========================
	//ham kiem tra xem mang co chua dong thoi so duong, so am va so 0 hay khong
	bool soduong = false;
	bool soam 	 = false;
	bool so0 	 = false;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] > 0 )
			soduong = true;
		else if ( a[i] < 0)
			soam = true;
		else 
			so0 = true;
	}
	//in ra ket qua kiem tra
	if(soduong && soam && so0)
		cout<<"\nMang chua dong thoi soduong,soam va so0";
	else if ( soduong && soam)
		cout<<"\nmang chua dong thoi so duong va so am";
	else if ( soduong && so0)
		cout<<"\nmang chua dong thoi so duong va so 0";
	else if( soam && so0)
		cout<<"\nmang chua dong thoi so am va so 0";
	else
		cout<<"\nmang chi chua 1 loai so";
		
//=======================CAU B===========================
	//in ra vi tri tat ca cac phan tu la so nguyen to
	int count = 0;
	for(int i = 0 ; i < n;  i++)
	{
		if(songuyento(a[i]))
		{
			count++;
			cout<<"\nVi tri so nguyen to thu "<<count<<" la: "<<i<<endl;
		}
	}
//============================CAU C===============================
	// Xoa tat ca cac so nguyen to co trong mang
  for (int i = 0; i < n; i++) 
  {
    if (songuyento(a[i])) 
	{
      for (int j = i; j < n - 1; j++)
		{
        a[j] = a[j + 1];
      	}
      n--;
      i--;
    }
  }
  // in ra mang sau khi xoa so nguyen to
  cout <<"Cac mang khong phai la so nguyen to: ";
  for (int i = 0; i < n; i++) 
  {
	cout<<a[i] << " ";
  }

}

