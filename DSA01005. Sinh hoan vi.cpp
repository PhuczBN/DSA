#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n, a[30], ok=0;
void ktao() {
	for(int i=1; i<=n; i++) {
		a[i]=i;
	}
}
void in() {
	for(int i=1; i<=n; i++) cout<<a[i];
	cout<<" ";
}
void sinh() {
	int i=n-1;
	while(i>0&&a[i]>a[i+1]) i--;
	if(i==0) {
		ok=1;
		return;
	} else {
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r) {
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		ktao();
		do{
			in();
			sinh();
		}
		while(ok==0);
		cout<<endl;
		ok=0;
	}
	return 0;
}
