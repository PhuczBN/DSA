#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int a[21],u[21];
vector<int>v;
vector<vector<int>> res;
int check1() {
	int cnt=0;
	for(int i=1; i<=n; i++) {
		if(u[i]) cnt++;
		if(cnt>=2) return 1;
	}
	return 0;
}
int check2() {
	vector<int>x;
	for(int i=1; i<=n; i++) {
		if(u[i]) x.push_back(a[i]);
	}
	for(int i=0; i<x.size()-1; i++) {
		if(x[i]>x[i+1]) return 0;
	}
	return 1;
}
void Try(int i) {
	for(int j=0; j<2; j++) {
		u[i]=j;
		if(check1()) {
			if(check2()) {
				for(int i=1; i<=n; i++) {
					if(u[i]) {
						v.push_back(a[i]);
					}
				}
			}
			res.push_back(v);
		} else Try(i+1);
	}
}
void test() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	Try(1);
	sort(res.begin(),res.end());
	for(auto x:res) {
		for(auto j:x) {
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
int main() {
	test();
	return 0;
}
