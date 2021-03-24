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
	ll check = 0;
	if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0'){
		check=1;
	}
	if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
		check=1;
	}
	if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
		check=1;
	}
	if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0'){
		check=1;
	}
	if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0'){
		check=1;
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}