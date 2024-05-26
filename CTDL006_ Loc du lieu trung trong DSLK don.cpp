#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
	int n;
	cin>>n;
	int a[n];
	map<int,bool> mp;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<n; i++) {
		if(mp[a[i]]==0) cout<<a[i]<<" ";
		mp[a[i]]=1;
	}
	cout<<endl;
	return 0;
}
