#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int idx=lower_bound(a,a+n,1)-a;
	cout<<idx;
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
