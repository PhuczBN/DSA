#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,a[10000],b[2]={6,8};
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
bool check(){
	if(a[1]!=8||a[n]!=6) return 0;
	for(int i=1;i<=n;i++){
		if((a[i]==8&&a[i+1]==8)||(a[i]==6&&a[i+1]==6&&a[i+2]==6&&a[i+3]==6)) return 0;
	}
	return 1;
}
void Try(int i){
	for(int j=0;j<2;j++){
		a[i]=b[j];
		if(i==n){
			if(check()) in();
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n;
	Try(1);
	return 0;
}
