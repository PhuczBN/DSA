#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	string s1,s2;
	cin>>s1>>s2;
	int n=s1.size();
	int m=s2.size();
	int F[n+1][m+1];
	for(int i=0; i<=n; i++) {
		for(int j=0; j<=m; j++) {
			if(i==0||j==0) F[i][j]=0;
			else {
				if(s1[i-1]==s2[j-1]) {
					F[i][j]=F[i-1][j-1]+1;
				} else {
					F[i][j]=max(F[i-1][j],F[i][j-1]);
				}
			}
		}

	}
	cout<<F[n][m];
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
