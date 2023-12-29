
#include<iostream>
#include<vector>
using namespace std;

void Nhap(int a[][100], int n, int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<"Nhap phan tu thu ["<<i+1<<"] ["<<j+1<<"]: ";
			cin>>a[i][j];
		}
	}
}

void Xuat(int a[][100], int n, int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void tong(int a[][100], int n, int m) {
	long long ans = -1e18;
	vector<int> row;
	long long s = 0;
	for(int i=0; i<n; i++) {
		s = 0;
		for(int j=0; j<m; j++) {
			s += a[i][j];
		}
		if(s > ans) {
			ans = s;
			row.clear();
			row.push_back(i+1);
		}
		else if (s == ans) {
			row.push_back(i+1);
		}
	}
	
	cout << "Hang co tong lon nhat: ";
	for(int x: row) {
		cout << x << " ";
	}
	cout << endl;
}

int main() {
	int n,m;
	cout<<"Nhap so hang: ";
	cin>>n;
	cout<<"Nhap so cot: ";
	cin>>m;
	int a[100][100];
	Nhap(a, n, m);
	cout << "Ma tran vua nhap: " << endl;
	Xuat(a, n, m);
	tong(a, n, m);
	
	return 0;
}

