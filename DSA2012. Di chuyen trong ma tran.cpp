#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m,x;
int a[101][101];
void Try(int i,int j) {
	if(i==n&&j==m) {
		x++;
		return;
	}
	if(i+1<=n)
		Try(i+1,j);
	if(j+1<=m)
		Try(i,j+1);
}

void test() {
	cin>>n>>m;
	x=0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
		}
	}
	Try(1,1);
	cout<<x;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
		cout<<endl;
	}
	return 0;
}
