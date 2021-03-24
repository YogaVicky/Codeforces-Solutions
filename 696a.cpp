#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	string s;
	cin>>s;
	ll f=1;
	cout<<1;
	if(s[0]=='0')
		m=1;
	else
		m=2;
	for(i=1;i<n;i++){
		if(s[i]=='1'){
			if(m==1){
				cout<<1;
				m=2;
			}
			else if(m==0){
				cout<<1;
				m=2;
			}
			else{
				cout<<0;
				m=1;
			}
		}
		else{
			if(m==1){
				cout<<0;
				m=0;
			}
			else if(m==0){
				cout<<1;
				m=1;
			}
			else{
				cout<<1;
				m=1;
			}	
		}
	}
	cout<<endl;
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