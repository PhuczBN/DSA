#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int a[11][11];
vector<string> v;
void Try(int i,int j, string s){
	if(i==n&&j==n){
		v.push_back(s);
		return;
	}
	if(i<n&&a[i+1][j]==1){
		Try(i+1,j,s+'D');
	}
	if(j<n&&a[i][j+1]==1){
		Try(i,j+1,s+'R');
	}
}
void test() {
	cin>>n;
	v.clear();
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
		}
	}
	if(a[1][1]==0||a[n][n]==0) {
		cout<<"-1\n";
		return;
	}
	Try(1,1,"");
	if(v.empty()) cout<<"-1\n";
	for(auto i:v){
		cout<<i<<" ";
	}
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
