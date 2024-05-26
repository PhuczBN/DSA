#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	vector<int>a(n+1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	int ok=-1;
	for(int i=1;i<=n;i++){
		int left=a[i-1];
		int right=a[n]-a[i];
		if(left==right){
				cout<<i;
				return;
		}
	}
	cout<<"-1";
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
