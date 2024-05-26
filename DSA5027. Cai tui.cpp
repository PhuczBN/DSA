#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,v;
int a[1000],b[1000];

void Init(){
	cin>>n>>v;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		Init();
		int x[v+5]={};
		for(int i=0;i<n;i++){
			for(int j=v;j>=a[i];j--){
				x[j]=max(x[j],x[j-a[i]]+b[i]);
			}
		}
		cout<<x[v];
		cout<<endl;
	}
	return 0;
}
