#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-k+1;i++){
		for(int j=1;j<k;j++){
			a[i]=max(a[i],a[j]);
		}
	}
	for(int i=0;i<n-k+1;i++){
		cout<<a[i]<<" ";
	}
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
