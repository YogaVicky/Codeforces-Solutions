#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
ll countSC(ll N)
{
    ll res = (ll)sqrt(N) + (ll)cbrt(N)
              - (ll)(sqrt(cbrt(N)));
 
    return res;
}
void solve(){
	ll n,i,j,k,m;
	cin>>n;
	cout<<countSC(n)<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}