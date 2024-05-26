#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	ll p,q;
	cin>>p>>q;
	while(1){
		if(q%p==0){
			cout<<"1/"<<q/p;
			return;
		}
		ll newQ=q/p+1;
		cout<<"1/"<<newQ<<" + ";
		p=p*newQ-q;
		q=q*newQ;
	}
	
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
		cout<<endl;
	}
	return 0;
}
