#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	vector<ll>b;
	b.pb(a[0]);
	for(i=1;i<n;i++){
		if(a[i]!=a[i-1])
			b.pb(a[i]);
	}
	ll l  = b.size();
	map<ll,ll>m;
	for(i=0;i<b.size();i++)
		m[b[i]]++;
	for(auto it = m.begin();it!=m.end();it++){
		if(it->first!=b[0])
			it->second++;
		if(it->first!=b[l-1])
			it->second++;
	}
	ll val = INT_MAX;
	for(auto it = m.begin();it!=m.end();it++){
		if(val>it->second){
			val = it->second;
		}
	}
	cout<<val-1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}