#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	int a[n];
	multiset<int>se;
	for(int i=0;i<n;i++){
		cin>>a[i];
		se.insert(a[i]);
	}
	for(auto x:se){
		cout<<x<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		test();
	}
	return 0;
}
