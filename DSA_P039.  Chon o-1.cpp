#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin>>a[i][j];
		}
	}
	int sum=0;
	int x=0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(a[i][j]>x) x=a[i][j];
		}
		sum+=x;
		x=0;
	}

	cout<<sum;
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
