#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int X[1000],a[100];
bool check(int sum) {
	if(sum<2) return 0;
	for(int i=2; i<=sqrt(sum); i++) {
		if(sum%i==0 ) return 0;
	}
	return 1;
}
void Init() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
}
void Result() {
	int sum=0;
	for(int i=1; i<=n; i++) {
		if(X[i]) sum+=a[i];
	}
	if(check(sum)) {
		for(int i=1; i<=n; i++) {
			if(X[i]) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
void Back_track(int i) {
	for(int j=0; j<=1; j++) {
		X[i]=j;
		if(i==n) {
			Result();
		} else {
			Back_track(i+1);
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		Init();
		Back_track(1);
	}
	return 0;
}

