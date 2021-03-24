#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll ans=0;
	vector<ll>pre(n);
	map<ll,ll>m;
	m[0]=1;
	pre[0]=a[0];
	for(i=1;i<n;i++){
		pre[i]=a[i]+pre[i-1];
	}
	for(i=0;i<n;i++){
		if(m[pre[i]]>0){
			ans++;
			m.clear();
			m[pre[i-1]]++;
		}
		m[pre[i]]++;
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