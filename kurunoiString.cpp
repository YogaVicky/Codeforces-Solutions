#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	string s,s1;
	cin>>s;
	ll st=0,ed=s.length()-1,i;
	vector<ll>a;
	for(;st<ed;){
		// cout<<st<<" "<<ed<<endl;
		if(s[st]=='(' && s[ed] == ')'){
			a.push_back(st+1);
			a.push_back(ed+1);
			st++;
			ed--;
		}
		else if(s[st]=='(')
			ed--;
		else
			st++;
	}
	if(a.size()!=0){
			cout<<1<<endl;
		sort(a.begin(),a.end());
		cout<<a.size()<<endl;
		for(auto it=a.begin();it!=a.end();it++)
			cout<<*it<<" ";
		cout<<endl;
	}
	else
			cout<<0<<endl;
	return 0;
}