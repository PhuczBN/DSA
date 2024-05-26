#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n,k;
	cin>>n>>k;
	int a[n];
	map<int,int>mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	if(mp[k]) cout<<mp[k]<<endl;
	else cout<<"-1"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		test();
	}
	return 0;
}
