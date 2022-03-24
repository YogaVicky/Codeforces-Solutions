#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

ll accurateFloor(ll a, ll b) {
	ll val = a / b;
	while (val * b > a)
		val--;
	return val;
}

void solve(){
	ll n,i,j,k,m,x,y;
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll ans=INT_MAX;
	ll pre[n]={0};
	pre[0]=a[0];
	for(i=1;i<n;i++){
		pre[i]+=pre[i-1]+a[i];
	}
	for(y=0;y<n;y++){
		ll temp = a[0]-accurateFloor(k-pre[n-y-1]+a[0],(y+1));
		x = max(0LL,temp);
		ans = min(ans,x+y);
	}
	cout<<ans<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
