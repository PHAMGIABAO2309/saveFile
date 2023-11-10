#include<iostream>
using namespace std;

int demgiatriphanbiet(int a[],int n)
{
	int count=0;
	int phanbietmang[100]; //mang de luu cac gia tri phan biet
	for(int i=0; i<n;i++)
	{
		bool Moi = true;//ktra xem gtri htai trong mang da xuat hien truoc do hay chua
		for(int j=0; j<count;j++)
		{
			if(a[i] == phanbietmang[j])
			{
				Moi = false;
				break;
			}
		}
		if(Moi)
		{
			phanbietmang[count] = a[i];
			count++;
		}
	}
	return count;
}
void Nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	int kq = demgiatriphanbiet(a,n);
	cout<<"So luong gia tri phan biet: "<<kq;
}