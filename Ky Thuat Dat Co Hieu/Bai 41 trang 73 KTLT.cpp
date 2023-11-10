#include<iostream>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu ["<<i<<"]: ";
		cin>>a[i];
	}
}
bool kt2giatri0lientiep(int a[],int n)
{
	bool flag = false; //co hieu, ban dau gan gia tri la false
	for(int i=0; i<n-1; i++)
	{
		//ktra neu ton tai 2 phtu 0 lien tiep co gtri khac nhau
		if(a[i] == a [i+1])
		{
			flag = true;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu trong mang: ";cin>>n;
	int a[n];
	Nhap(a,n);
	int kq = kt2giatri0lientiep(a,n);
	if(kq)
	{
		cout<<"Co ton tai 2 gia tri 0 lien tiep";
	}
	else
	{
		cout<<"0 ton tai 2 gia tri 0 lien tiep";
	}
}