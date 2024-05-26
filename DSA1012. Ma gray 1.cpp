#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int a[11];
void in() {
	cout<<a[1];
	for(int i=2; i<=n; i++) {
		int tmp=a[i]^a[i-1];
		cout<<tmp;
	}
	cout<<" ";
}
void Try(int i) {
	for(int j=0; j<=1; j++) {
		a[i]=j;
		if(i==n) in();
		else Try(i+1);

	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		Try(1);
		cout<<endl;
	}
	return 0;
}
