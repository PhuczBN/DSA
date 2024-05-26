#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int &i:a)cin>>i;
	for(int i=1;i<n;i++){
		bool sort=true;
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				sort=false;
			}
		}
		if(sort) break;
		cout<<"Buoc "+to_string(i)+": ";
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	test();
	return 0;
}
