#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
vector<int> a,b,used;
vector<vector<int>>res;
void in() {
	//sort(res.begin(),res.end());
	for(auto i:res) {
		for(int j:i) {
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
}
void Try(int i) {
	for(int j=0; j<n; j++) {
		if(!used[j]) {
			b[i]=a[j];
			used[j]=1;
			if(i==n-1){
				res.push_back(b);
		}
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main() {
	cin>>n;
	a.resize(n);
    b.resize(n);
    used.resize(n, 0);
	for(int &i:a) cin>>i;
	sort(a.begin(),a.end());
	Try(0);
	in();
	
}
