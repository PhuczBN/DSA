#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
string s;
vector<string>res;
void solve(){
	string z(k,'A');
	 int pos=s.find(z,0);
	 if(pos!=-1){
	 	string sub=s.substr(pos+1);
	 	if(sub.find(z)==-1){
	 		res.push_back(s);
		 }
	 }
}
void Try(int i){
	for(char j='A';j<='B';j++){
		s[i]=j;
		if(i==n-1) solve();
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	s.resize(n);
	Try(0);
	sort(res.begin(),res.end());
	cout<<res.size()<<endl;
	for(string i:res ){
		cout<<i<<endl;
	}
	return 0;
}
