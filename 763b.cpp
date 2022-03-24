#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)


void solve(){
	ll n,i,j,k,m;
	ll check=0,check1=0;
	cin>>n;
	ll x,y;
	map<pair<ll,ll>,ll>mp;
	vector<pair<ll,ll>>a;
	for(i=0;i<n;i++){
		cin>>x>>y;
		a.pb(make_pair(x,y));
		mp[make_pair(x,y)]=1;
	}
	for(i=0;i<n;i++){
		pair<ll,ll>p = a[i];
		ll l = p.first;
		ll r = p.second;
		if(l==r){
			cout<<l<<" "<<r<<" "<<l<<endl;
			continue;
		}
		if(mp[make_pair(l+1,r)]==1){
			cout<<l<<" "<<r<<" "<<l<<endl;
			continue;
		}
		if(mp[make_pair(l,r-1)]==1){
			cout<<l<<" "<<r<<" "<<r<<endl;
			continue;
		}
		for(j=l+1;j<r;j++){
			if(mp[make_pair(j+1,r)]==1 && mp[make_pair(l,j-1)]==1){
				cout<<l<<" "<<r<<" "<<j<<endl;
				break;
			}	
		}
	}
	cout<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}