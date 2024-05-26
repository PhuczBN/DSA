#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
int a[100];
int mark[100];
vector<vector<int>>v;
int check(int a[]) {
	int sum=0;
	for(int i=0; i<n; i++) {
		if(mark[i]) sum+=a[i];
	}
	if(sum!=k) return 0;
	return 1;
}
void Try(int i) {
	for(int j=0; j<=1; j++) {
		mark[i]=j;
		if(i==n-1) {
			if(check(a)) {
				vector<int> tmp;
				for(int i=0; i<n; i++) {
					if(mark[i]) tmp.push_back(a[i]);
				}
				v.push_back(tmp);
			}
		} else Try(i+1);
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		v.clear();
		memset(a,0,100);
		memset(mark,0,100);
		cin>>n>>k;
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		sort(a,a+n);
		Try(0);
		if(!v.size()) cout<<-1;
		for(int i=v.size()-1; i>=0; i--) {
			cout<<"[";
			for(int j=0; j<v[i].size()-1; j++) {
				cout<<v[i][j]<<" ";
			}
			cout<<v[i][v[i].size()-1]<<"] ";
		}
		cout<<endl;
	}
	return 0;
}
