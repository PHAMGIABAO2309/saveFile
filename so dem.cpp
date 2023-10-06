#include<iostream>
using namespace std;
int main() 
{
	int numbers[10];
	for(int i = 0; i<9;i++)
	{
		cout<<"Nhap thu tu thu "<<i<<"la: ";
		cin>>numbers[i];
	}
	for(int i = 0;i<10;i++)
	{
		cout<<numbers[i]<<" ";
	}
}
