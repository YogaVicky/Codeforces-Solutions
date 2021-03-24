#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	vector<ll>a(6);
	for(i=0;i<6;i++){
		cin>>a[i];
	}
	cin>>n;
	vector<ll>b(n);
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	vector<ll>c(6),d(6);
	for(i=0;i<6;i++){
		c[i]=abs(b[n-1]-a[i]);
	}
	for(i=0;i<6;i++){
		d[i]=abs(b[0]-a[i]);
	}
	sort(c.begin(),c.end());
	sort(d.begin(),d.end());
	ll ans=c[0]-d[5];
	if(ans<0)
		ans=0; 
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