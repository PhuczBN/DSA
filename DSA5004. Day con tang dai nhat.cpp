#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void Init(int n,vector<int> &a){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int Dynamic(vector<int> a){
	int n=a.size();
	if(n==0) return 0;
	vector<int> dp(n,1);
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	return *max_element(dp.begin(),dp.end());
}
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	Init(n,a);
	cout<<Dynamic(a);
	return 0;
}
