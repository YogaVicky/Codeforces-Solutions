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
	vector<ll>b(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	vector<pair<ll,ll>>c(n);
	vector<ll>d(n);
	for(i=0;i<n;i++){
		c[i]=make_pair(a[i],b[i]);
	}
	sort(c.begin(),c.end());
	sort(c.begin(),c.end());
	ll s=0;
	for(i=0;i<n;i++){
		d[i]=c[i].second+s;
		s=d[i];
	}
	ll res = d[n-1];
	for(i=0;i<n;i++){
		ll f = max(c[i].first,d[n-1]-d[i]);
		// cout<<f<<endl;
		if(res>f)
			res=f;
	}
	cout<<res<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}