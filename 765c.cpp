#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y,l;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n>>l>>k;
	vector<ll>a(n),b(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	vector<pair<ll,ll>>c;
	for(i=1;i<n;i++){
		c.pb({b[i],a[i]});
	}
	sort(c.begin(),c.end());
	vector<pair<ll,ll>>d;
	for(i=0;i<n-k-1;i++){
		d.pb({c[i].second,c[i].first});
	}
	d.pb({a[0],b[0]});
	sort(d.begin(),d.end());
	// for(i=0;i<n-k;i++){
	// 	cout<<d[i].first<<" "<<d[i].second<<endl;
	// }
	ans=0;
	for(i=0;i<n-k-1;i++){
		ans+=(d[i+1].first-d[i].first)*d[i].second;
	}
	ans+=(l-d[n-k-1].first)*d[n-k-1].second;
	cout<<ans<<endl;
}
int main(){
	ll t,i;
	// cin>>t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}