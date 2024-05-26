#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	map<int,int>mp;
	for(int i=0;i<n;i++){
		if(a[i]!=0&&(a[i]==a[i+1])){
			a[i]*=2;
			a[i+1]=0;
		}
	}
	for(int x : a){
		if(x == 0) mp[x]++;
		else cout<<x<<" ";
	}
	while(mp[0]--) cout<<"0 ";
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
