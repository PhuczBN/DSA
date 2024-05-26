#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	int x[n+m];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<m; i++) {
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0,k=0;
	while(i<n&&j<m) {
		if(a[i]<=b[j]) {
			x[k]=a[i];
			++i,++k;
		} else {
			x[k]=b[j];
			++j,++k;
		}
	}
	while(i<n) {
		x[k]=a[i];
		++k,++i;
	}
	while(j<m) {
		x[k]=b[j];
		++k,++j;
	}
//	sort(x,x+k);
	for(int y:x) {
		cout<<y<<" ";
	}
	cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
	}
	return 0;
}
