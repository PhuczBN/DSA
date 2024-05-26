#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int a[11];
vector<string> v;
void Try(int a[],int n) {
	if(n>0) {
		string tmp;
		tmp.push_back('[');
		for(int i=1; i<=n-1; i++) {
			tmp+=to_string(a[i])+" ";
		}
		tmp+=to_string(a[n])+']';
		v.push_back(tmp);
		for(int i=1; i<=n-1; i++) {
			a[i]+=a[i+1];
		}
		Try(a,n-1);
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		v.clear();
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}
		Try(a,n);
		for(int i=v.size()-1; i>=0; i--) {
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
