#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int &i:a) cin>>i;
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(binary_search(a.begin()+j+1,a.end(),k-a[i]-a[j])){
				cout<<"YES";
				return;
			}
		}
	}
	cout<<"NO";
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
