#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
char a[100];
void in() {
	for(int i=0; i<n; i++) {
		cout<<a[i];
	}
	cout<<' ';
}
void Try(int i) {
	for(char j='A'; j<='B'; j++) {
		a[i]=j;
		if(i==n-1) in();
		else Try(i+1);
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		Try(0);
		cout<<endl;
	}
	return 0;
}
