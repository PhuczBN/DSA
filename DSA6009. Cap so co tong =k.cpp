#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n,k,cnt=0;
	cin>>n>>k;
	vector<int>a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i]+a[j]==k)
				cnt++;
		}
	}
	cout<<cnt<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
	}
	return 0;
}
