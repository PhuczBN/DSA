#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int toint(string s,char from, char to){
	int num=0;
	for(char &c:s){
		if(c==from) c=to;
		num=num*10+c-'0';
	}
	return num;
}
void test(){
	string a,b;
	cin>>a>>b;
	cout<<toint(a,'6','5')+toint(b,'6','5')<<" ";
	cout<<toint(a,'5','6')+toint(b,'5','6');
}
int main(){
 	test();
	return 0;
}
