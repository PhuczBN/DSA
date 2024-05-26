#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
struct node{
	int data;
	node *Left;
	node *Right;
	node(int x){
		data=x;
		Left=Right=NULL;
	}
};
typedef node *NODE;;
map<ll,NODE> mp;
int check(NODE root){
	if(root==NULL) return false;
	else if(root->Left==NULL&&root->Right==NULL) return true;
	return false;
}
ll sum(NODE root){
	if(root==NULL) return 0;
	ll ans=0;
	if(check(root->Right)==true) ans=root->Right->data;
	if(root->Right!=NULL) ans+=sum(root->Right);
	if(root->Left!=NULL && check(root->Left)==false){
		ans+=sum(root->Left);
	}
	return ans;
}
void test(){
	int n;
	cin>>n;
	NODE root=NULL;
	for(int i=0;i<n;i++){
		ll u,v;
		string x;
		cin>>u>>v>>x;
		if(mp.find(u)==mp.end()){
			root = new node(u);
			if(x=="L"){
				root->Left= new node(v);
				mp[v]=root->Left;
			}
			else{
				root->Right= new node(v);
				mp[v]=root->Right;
			}
			mp[u]=root;
		}
		else{
			if(x=="L"){
				mp[u]->Left= new node(v);
				mp[v]=mp[u]->Left;
			}
			else{
				mp[u]->Right= new node(v);
				mp[v]=mp[u]->Right;
			}
		}
	}
	cout<<sum(root);
	mp.clear();
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
