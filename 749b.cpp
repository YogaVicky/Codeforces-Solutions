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
	ll n,i,j,k,m;
	cin>>n>>m;
	map<ll,ll>mp;
	ll a,b,c;
	for(i=0;i<m;i++){
		cin>>a>>b>>c;
		mp[b]++;
	}
	ll ans;
	for(i=1;i<=n;i++){
		if(mp[i]==0){
			ans=i;
			break;
		}
	}
	for(i=1;i<=n;i++){
		if(ans!=i){
			cout<<ans<<" "<<i<<endl;
		}
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
