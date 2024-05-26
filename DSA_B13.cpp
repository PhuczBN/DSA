#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	int a[n];
	set<int>se;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>a[i];
		while(a[i]>0){
			int x=a[i]%10;
			if(x%2!=0){
				se.insert(x);
			}
			a[i]/=10;
		}
	}
	if(se.size()!=0){
		for(auto m:se){
			v.push_back(m);
		} 
		sort(v.begin(),v.end(),greater<int>());
		for(auto m:v){
			cout<<m<<" ";
		}
	}
	else cout<<"-1";
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
	return 0;
}
