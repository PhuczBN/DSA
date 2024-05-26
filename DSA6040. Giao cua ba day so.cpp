#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n,m,k;
	cin>>n>>m>>k;
	vector<ll>a(n),b(m),c(k);
	for(auto &i:a) cin>>i;
	for(auto &i:b) cin>>i;
	for(auto &i:c) cin>>i;
	vector<ll> res;
	int i=0,j=0,z=0;
	while(i<n&&j<m&&z<k){
		if(a[i]==b[j]&&a[i]==c[z]){
			res.push_back(a[i]);
			i++,j++,z++;
		}
		else if(a[i]<b[j]) i++;
		else if(b[j]<c[z]) j++;
		else z++;
	}
	if(res.empty()) cout<<"-1";
	else  {
		for(auto i:res){
			cout<<i<<" ";
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
	return 0;
}
