#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k;
	string s,a;
	cin>>s>>a;
	map<char,int>m;
	for(i=0;i<s.length();i++)
		m[s[i]]=i+1;
	ll ans=0;
	for(i=1;i<a.length();i++){
		ans+=abs(m[a[i]]-m[a[i-1]]);
	}
	cout<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
