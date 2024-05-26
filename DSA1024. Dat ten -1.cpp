#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int k,n;
int a[30];
vector<string> tmp;
vector<vector<string>> v;
void solve() {
	vector<string>x;
	for(int i=1; i<=k; i++) {
		x.push_back(tmp[a[i]]);
	}
	sort(x.begin(),x.end());
	v.push_back(x);
}
void Try(int i) {
	for(int j=a[i-1]+1; j<=n-k+i; j++) {
		a[i]=j;
		if(i==k) solve();
		else Try(i+1);
	}
}
int main() {
		cin>>n>>k;
		map<string,bool> mp;
		for(int i=0; i<n; i++) {
			string s;
			cin>>s;
			mp[s]=true;
		}
		tmp.push_back("");
		for(auto i:mp) {
			tmp.push_back(i.first);
		}
		n=tmp.size()-1;
		Try(1);
		sort(v.begin(),v.end());
		for(auto i:v) {
			for(string j : i) {
				cout<<j<<" ";
			}
			cout<<endl;
		}
		return 0;
	
}



