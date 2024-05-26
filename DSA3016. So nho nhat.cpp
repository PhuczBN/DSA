#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int s,d;
	cin>>s>>d;
	if(9*d<s) {
		cout<<"-1";
		return;
	}
	int mi[d]= {};
	mi[0]=1;
	int dis=s-1;
	int i=d-1;
	while(dis>=9) {
		mi[i]=9;
		dis-=9;
		i--;
	}
	mi[i]+=dis;
	for(int i:mi) cout<<i;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
		cout<<endl;
	}
	//return 0;
}
