#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,sum;
int a[101];
int ok=0;
void Try(int i,int tmp){
	if(ok) return;
	if(tmp==sum/2){
		ok=1;
		return;
	}
	if(tmp>sum/2) return;
	for(int j=i;j<n;j++){
		Try(i+1,tmp+a[j]);
	}
}
void test(){
	cin>>n;
	sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%2!=0) cout<<"NO";
	else{
		Try(0,0);
		if(ok) cout<<"YES";
		else cout<<"NO";
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
