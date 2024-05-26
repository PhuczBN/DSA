#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,a[10],b[10],used[10];
int cnt;
bool stop;
void solve(){
	cnt++;
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i]) return;
	}
	stop=true;
}
void Try(int i){
	if(stop) return;
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i]=j;
			used[j]=1;
			if(i==n) solve();
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cnt=0;stop=false;
		memset(used,0,10);
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		Try(1);
		cout<<cnt<<endl;
	
	}
	return 0;
}
