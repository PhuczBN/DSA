#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int ok=true;
int n,k,X[100],A[100];
void Init(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>A[i];
	}
}
void Result(){
	for(int i=1;i<=k;i++){
		cout<<X[i]<<" ";
	}
	cout<<endl;
}
void Next_Combination(){
	int i=k;
	while(i>0&&X[i]==n-k+i){
		i--;
	}
	if(i>0){
		X[i]++;
		for(int j=i+1;j<=k;j++){
			X[j]=X[i]+j-i;
		}
	}
	else {
		ok=false;
	}
}
int main(){
	Init();
	while(ok){
		Result();
		Next_Combination();
	}
	return 0;
}
