/* t�m 'gi� tr? duong d?u ti�n' trong m?ng 1 chi?u c�c s? th?c.
N?u m?ng kh�ng c� gi� tr? duong th� tr? v? gi� tr? -1 */
#include<iostream>
using namespace std;
float timgiatriduongdautien(float a[] , int n)
{
	for(int i = 0; i< n; i++)
	{
		if(a[i] > 0)
			return a[i];
	}
	return -1;
}
int main()
{
	int n;
	cout<<"Nhap so luong cac phan tu trong mang: "; cin>>n;
	float a[n];
	for(int i = 0; i<n; i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>a[i];
	}
	float kq = timgiatriduongdautien(a,n);
	if(kq >0)
	{
		cout<<"Gia tri duong dau tien trong mang la: "<<kq;
	}
	else
		cout<<"khong co gia tri duong trong mang";
}