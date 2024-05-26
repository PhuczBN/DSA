#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int d;
	cin>>d;
	string s;
	cin>>s;
	int Max=-1e9;
	int cnt[257]={};
	for(char i:s){
		cnt[i]++;
		Max=max(Max,cnt[i]);
	}
	if(d*(Max-1)>s.size()-1) cout<<-1;
	else cout<<1;
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
