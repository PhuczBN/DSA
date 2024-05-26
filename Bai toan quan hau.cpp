#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,cnt;
int X[100],Cot[100],Nguoc[100],Xuoi[100];

void Init() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		Cot[i]=true;
	}
	for(int i=1; i<2*n; i++) {
		Xuoi[i]=true;
		Nguoc[i]=true;
	}
}
void Back_track(int i) {
	for(int j=1; j<=n; j++) {
		if(Cot[j]&&Xuoi[i-j+n]&&Nguoc[i+j-1]) {
			X[i]=j;
			Cot[j]=false;
			Xuoi[i-j+n]=false;
			Nguoc[i+j-1]=false;
			if(i==n) {
				cnt++;
			} else {
				Back_track(i+1);
			}
			Cot[j]=true;
			Xuoi[i-j+n]=true;
			Nguoc[i+j-1]=true;
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cnt=0;
		Init();
		Back_track(1);
		cout<<cnt<<endl;
	}
	return 0;
}
