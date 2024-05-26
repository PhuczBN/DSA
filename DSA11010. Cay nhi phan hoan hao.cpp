#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
struct node {
	int data;
	node *Left;
	node *Right;
	node (int x) {
		data=x;
		Left=Right=NULL;
	}
};
typedef node *NODE;
map<int,NODE> mp;

int height(NODE root) {
	if(root==NULL) return 0;
	return max(height(root->Left),height(root->Right))+1;
}
int check(NODE root) {
	if(root == NULL) return 1;
	if((root->Left==NULL&&root->Right!=NULL)||(root->Left!=NULL&&root->Right==NULL)) return 0;
	return check(root->Left)&&check(root->Right);
}
int check1(NODE root, int level,int h) {
	if(root==NULL) return 1;
	if(root->Left==NULL&&root->Right==NULL&&level<h) return 0;
	return check1(root->Left,level+1,h)&&check1(root->Right,level+1,h);
}
void test() {
	int n;
	cin>>n;
	NODE root=NULL;
	for(int i=0; i<n; i++) {
		int u,v;
		string x;
		cin>>u>>v>>x;
		if(mp.find(u)==mp.end()) {
			root=new node(u);
			if(x=="L") {
				root->Left= new node(v);
				mp[v]=root->Left;
			} else {
				root->Right= new node(v);
				mp[v]=root->Right;
			}
			mp[u]=root;
		} else {
			if(x=="L") {
				mp[u]->Left=new node(v);
				mp[v]= mp[u]->Left;
			} else {
				mp[u]->Right=new node(v);
				mp[v]=mp[u]->Right;
			}
		}
	}
	int h=height(root);
	if(check(root)&&check1(root,1,h)) cout<<"Yes";
	else cout<<"No";
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
