#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<bool> e(1e6+1,true);
void nt(){
	e[0]=e[1]=false;
	for(int i=2;i<=1e3;i++){
		if(e[i]){
			for(int j=i*i;j<=1e6;j+=i){
				e[j]=false;
			}
		}
	}
}
void test(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(e[i]&&e[n-i]){
			cout<<i<<" "<<n-i;
			return;
		}
	}
	cout<<-1;
}
int main(){
	int t;
	cin>>t;
	nt();
	while(t--){
		test();
		cout<<endl;	
	}
	return 0;
}
