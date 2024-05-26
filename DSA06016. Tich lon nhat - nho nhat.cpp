#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(b,b+m);
	sort(a,a+n,greater<int>());
	cout<<1ll*a[0]*b[0]<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		test();
	}
	return 0;
}
