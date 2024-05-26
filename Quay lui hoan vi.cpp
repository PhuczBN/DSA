#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int X[100];
bool chuaxet[100];
void Init() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		chuaxet[i]=true;
	}
}
void Result() {
	for(int i=1; i<=n; i++) {
		cout<<X[i]<<" ";
	}
	cout<<endl;
}
void Back_track(int i) {
	for(int j=1; j<=n; j++) {
		if(chuaxet[j]) {
			X[i]=j;
			chuaxet[j]=false;
			if(i==n) {
				Result();
			} else {
				Back_track(i+1);
			}
			chuaxet[j]=true;
		}
	}
}
int main() {
	Init();
	Back_track(1);
	return 0;
}
