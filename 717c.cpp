#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0;
	cin>>n;
	vector<ll>a;
	ll p=1;
	for(i=1;i<=n;i++){
		if(__gcd(i,n)==1){
			a.pb(i);
			p*=i;
			p%=n;
		}
	}
	ll ans=a.size();
	if(p!=1){
		ans--;
		for(i=0;i<a.size();i++){
			if(p==a[i])
				a[i]=-1;
		}

	}
	cout<<ans<<endl;
	for(i=0;i<a.size();i++){
		if(a[i]!=-1)
		cout<<a[i]<<" ";
	}
	cout<<endl;
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