#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,a[1000000],b[1000000];
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int i){
	for(int j=n;j>0;j--){
		if(!b[j]){
			b[j]=1;
			a[i]=j;
			if(i==n) in();
			Try(i+1);
			b[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<endl;
	}
	return 0;
}
