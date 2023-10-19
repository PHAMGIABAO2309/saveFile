// cho mang A[] gom n so nguyen bao gom ca so 0
//tim so nguyen duong nho nhat khong co mat trong mang
//vd: [5,8,3,7,9,1], ta co ket qua la 2

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt[1000002];
int main()
{
	int TC; cin>>TC;
	while(TC--)
	{
		int n; cin>>n;
		memset(cnt,0,sizeof(cnt)); //khoi tao mang danh dau ban dau
		for(int i =0;i<n;i++)
		{
			int x; cin>>x;
			if(x>0)
				cnt[x]=1;
		}
		for(int i = 1;i<=1000001;i++)
		{
			if(cnt[i]==0)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
}

