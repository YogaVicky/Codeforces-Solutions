#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k,a;
	cin>>n;
	map<ll,ll>m;
	for(i=0;i<n;i++){
		cin>>a;
		m[a]++;
	}
	map<ll,ll>s;
	for(auto it = m.begin();it!=m.end();it++){
		s[it->second]++;
	}
	ll count = 0;
	for(auto it = s.begin();it!=s.end();it++){
		ll o = it->first;
		ll p = it->second;
		if(p-(o-1)>0)
			count+=p-(o-1);
	}
	cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}