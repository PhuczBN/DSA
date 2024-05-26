#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<int,int>a,pair<int,int>b) {
	if(a.second==b.second) return a.first>b.first;
	return a.second>b.second;
}
void test() {
	int n,x;
	cin>>n;
	pair<int,int>p[n];
	for(int i=0; i<n; i++) {
		cin>>x>>p[i].first>>p[i].second;
	}
	sort(p,p+n,cmp);
	int ans=0,cnt=0;
	int busy[1001]= {};
	//	for(int i=0;i<n;i++){
//		int j=p[i].first;
//		while(busy[j]&&j) j--;
//		if(!busy[j]&&j){
//			ans+=p[i].second;
//			cnt++;
//			busy[j]=1;
//		}
//	}
	for(int i=0; i<n; i++) {
		for(int j=p[i].first; j>0; j--) {
			if(!busy[j]) {
				ans+=p[i].second;
				cnt++;
				busy[j]=1;
				break;
			}
		}

	}
	cout<<cnt<<" "<<ans;
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
