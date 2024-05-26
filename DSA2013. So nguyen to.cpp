#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int snt[250];
int d=1,a[250];
int n,p,s;
vector<int> v;
vector<vector<int>>v1;
void nt() {
	snt[0]=snt[1]=1;
	for(int i=2; i<=50; i++) {
		if(!snt[i]) {
			for(int j=i*i; j<250; j+=i) {
				snt[j]=1;
			}
		}
	}
	for(int i=2; i<250; i++) {
		if(!snt[i]) a[d++]=i;
	}
}
void Try(int i,int sum=0) {
	if(sum>s) return;
	if(sum==s) {
		if(v.size()==n) v1.push_back(v);
		return;
	}
	for(int j=i; j<=d; j++) {
		if(a[j]<=p) continue;
		v.push_back(a[j]);
		Try(j+1,sum+a[j]);
		v.pop_back();
	}
}
int main() {
	int t;
	cin>>t;
	nt();
	while(t--) {
		cin>>n>>p>>s;
		v1.clear();
		v.clear();
		Try(1);
		sort(v1.begin(),v1.end());
		cout<<v1.size()<<endl;
		for(auto i:v1) {
			for(auto j:i) {
				cout<<j<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}


	return 0;
}
