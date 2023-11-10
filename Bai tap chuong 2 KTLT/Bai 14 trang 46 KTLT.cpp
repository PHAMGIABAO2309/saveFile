#include<iostream>
using namespace std;

// ham kiem tra 1 so nguyen co phai la so chan hay khong
bool ktra(int x)
{
	return (x%2 == 0);
}

// ham kiem tra mang toan so chan hay khong
bool ktraall( int arr[], int n)
{
	// duyet qua tung phan tu trong mang
	for(int i =0; i < n;i++)
	{
		// neu tim thay 1 phan tu la so LE thi tra ve FALSE
		if(!ktra(arr[i]))
		{
			return false;
		}
	}
	// neu duyet het mang ma khong tim thay phan tu nao la so LE thi tra ve TRUE
	return true;
}

int main()
{
	// khai bao mang
	int arr[] = { 2,4,6,8,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	// kiem tra mang
	if( ktraall(arr,n))
	{
		cout<<"Mang toan so chan";
	}
	else
	{
		cout<<"Mang khong toan so chan";
	}
}
