#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
char a[16];
void in() {
	for(int i=1; i<=k; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int i) {
	for(char j=a[i-1]+1; j<='A'+n-k+i-1; j++) {
		a[i]=j;
		if(i==k) in();
		else Try(i+1);
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		a[0]='@';
		Try(1);
	}

	return 0;
}
