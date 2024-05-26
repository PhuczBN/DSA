#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	int cnt=0;
	queue<string>q;
	vector<string>v;
	q.push("");
	while(!q.empty()){
		string s=q.front();
		q.pop();
		if(s!=""){
		v.push_back(s);}
		if(s.length()==n) continue;
		q.push(s+"6");
		q.push(s+"8");	
	}
	cout<<v.size()<<endl;
	for(auto i:v){
		cout<<i<<" ";
	}
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
