#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k,cnt;
int a[15],b[15];
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
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) solve();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cnt=0;
		stop=false;
		memset(a,0,15);
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>b[i];
		}
		Try(1);
		cout<<cnt<<endl; 
	}
	return 0;
}
