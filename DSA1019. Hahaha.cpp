#include<bits/stdc++.h>
using namespace std;
using ll=long long;
char b[2]= {'A','H'};
int n;
char a[100000];
void in() {
	for(int i=1; i<=n; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
bool check() {
	if(a[1]!='H'||a[n]!='A') return 0;
	for(int i=1; i<n; i++) {
		if(a[i]=='H'&&a[i+1]=='H') return 0;
	}
	return 1;
}
void Try(int i) {
	for(int j=0; j<2; j++) {
		a[i]=b[j];
		if(i==n) {
			if(check()) in();
		} else Try(i+1);
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
