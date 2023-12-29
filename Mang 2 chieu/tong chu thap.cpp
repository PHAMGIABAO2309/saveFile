#include <iostream>
using namespace std;

void Nhap(int a[][6], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"Nhap phan tu thu ["<<i<<"] ["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
}
void Xuat(int a[][6], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int tong(int a[][6], int n, int m)
{
	int s=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(i==n/2 || i==(n/2) - 1 || j==n/2 || j==(n/2) - 1)
				s+=a[i][j];
		}
	}
	return s;
}
int main() {
     int n = 4;
     int m = 6;
	int a[4][6];
	Nhap(a,n,m);
	Xuat(a,n,m);

    cout << "Tong cac chu so theo yeu cau la: " << tong(a,n,m)<< endl;

    return 0;
}
