// cho mang A[] gom n phan tu
// tim k phan tu lon nhat cua mang
// cac phan tu duoc dua ra theo thu tu giam dan
// VD: A=[2,
//		5,3,
//		10,7,9,12,6] ket qua la   12 10 9

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int TC; cin>>TC;
	while(TC--)
	{
		int n,k; cin>>n>>k;
		int a[n];
		for(int i = 0; i<n;i++)
			cin>>a[i];
		sort(a,  a+n,  greater<int>());
		for(int i = 0; i < k ;i++) //theo thu tu giam dan
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//		for(int i = k-1; i >=0; i--) theo thu tu tang dan
