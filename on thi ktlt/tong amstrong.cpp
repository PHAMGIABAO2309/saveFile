#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//nh?p m?ng 2 chi?u
void Nhap(float a[100][100], int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"Nhap vao ma tran thu: ["<<i<<","<<j<<"]"<<endl;
            cin>>a[i][j];
        }
    }
}
void Xuat(float a[100][100],int n , int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool ktamstrong(int so)
{
	int sogoc, sodu, n=0,kq=0;
	sogoc = so;
	while(sogoc !=0)
	{
		sogoc /= 10;
		++n;
	}
	sogoc = so;
	while(sogoc !=0)
	{
		sodu = sogoc%10;
		kq += pow(sodu,n);
		sogoc /=10;
	}
	return kq==so;
}
void tong(float a[100][100], int n, int m)
{
	int s=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m;j++)
		{
			if(ktamstrong(a[i][j]))
			{
				cout<<a[i][j]<<" ";
				s+=a[i][j];
			}
		}
	}
	cout<<"tong: "<<s;
}
int main()
{
    float a[100][100];
    int n,m;
    cout<<"Nhap vao n dong: ";
    cin>>n;
    cout<<"Nhap vao m cot: ";
    cin>>m;
    Nhap(a,n,m);
    Xuat(a,n,m);
   tong(a,n,m);
    return 0;
}