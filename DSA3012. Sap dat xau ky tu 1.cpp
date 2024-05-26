#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	string s;
	cin>>s;
	int dd[257]={};
	int Max=-1e9;
	for(char i:s){
		dd[i]++;
		Max=max(Max,dd[i]);
	}
	if(Max*2-1>s.size()) cout<<-1;
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
