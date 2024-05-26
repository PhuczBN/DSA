#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	int a[n];
	map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	for(auto x:mp){
		if(x.second>n/2){
			cout<<x.first;
			return;
		}
	}
	cout<<"NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
	return 0;
}
