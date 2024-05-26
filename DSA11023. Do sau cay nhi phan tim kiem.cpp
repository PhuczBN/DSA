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
typedef node *NODE;
int height(NODE root){
	if(root==NULL) return 0;
	return max(height(root->Left),height(root->Right))+1;
}
void Insert(NODE &root,int x){
	if(root==NULL){
		root= new node(x);
	}
	if(x<root->data) {
		Insert(root->Left,x);
	} 
	else if(x>root->data){
		Insert(root->Right,x);
	}
}
void test(){
	int n;
	cin>>n;
	NODE root=NULL;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		Insert(root,x);
	}
	cout<<height(root)-1;
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
