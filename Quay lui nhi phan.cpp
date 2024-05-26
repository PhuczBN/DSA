#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int X[1000];
bool check() {
	for(int i=1; i<=n/2; i++) {
		if(X[i]!=X[n-i+1]) return false;
	}
	return true;
}
void Init() {
	cin>>n;

}
void Result() {
	if(check()) {
		for(int i=1; i<=n; i++) {
			cout<<X[i]<<" ";
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
	Init();
	Back_track(1);
	return 0;
}

