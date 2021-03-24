#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
	string s;
	cin>>s;
	ll check=0;
	n = s.length();
	for(i=0;i<n;i++){
		if(s[i]=='1' && s[i+1]=='0'){
			check=1;
			break;
		}
	}
	if(check){
		check=0;
		for(i=0;i<n;i++){
			if(s[i]=='1' && s[i+1]=='1'){
				break;
			}
		}
		for(i;i<n;i++){
			if(s[i]=='0' && s[i+1]=='0'){
				check=1;
				break;
			}	
		}
		if(check)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
}
int main(){
	ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}