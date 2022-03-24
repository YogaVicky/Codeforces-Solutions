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
	string s;
	cin>>n>>s;
	ll ans=0;
	// vector<ll>a(n);
	for(i=0;i<n;i++){
		if((s[i]-'0')%2==0){
			ans+=i+1;
		}
	}
	cout<<ans<<endl;
}
int main(){
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
