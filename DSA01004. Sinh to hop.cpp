#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int a[100],n,k;
void hienthi(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int i,int j){
	for(int f=j;f<=n-k+i;f++){
		a[i]=f;
		if(i==k) {
			hienthi();
		}
		else Try(i+1,f+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1,1);
		cout<<endl;
	}
	return 0;
}
