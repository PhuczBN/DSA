#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int a[11];
void Try(int a[],int n) {
	if(n>0) {
		cout<<"[";
		for(int i=1; i<=n-1; i++) {
			cout<<a[i]<<" ";
		}
		cout<<a[n]<<"]";
		cout<<endl;
		for(int i=1; i<=n-1; i++) {
			a[i]+=a[i+1];
		}
		Try(a,n-1);
	}
}
void test() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	Try(a,n);
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
