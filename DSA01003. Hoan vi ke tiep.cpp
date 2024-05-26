#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		do{
			for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		}
		while(next_permutation(a+1,a+1+n));
		break;
	}
	return 0;
}
