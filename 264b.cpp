#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll e=0,ans=a[0];
	for(i=0;i<n-1;i++){
		if(a[i]<a[i+1]){
			if(a[i+1]-a[i]<=e)
				e-=(a[i+1]-a[i]);
			else{
				ans+=a[i+1]-(a[i]+e);
				e=0;
			}
		}
		else{
			e+=a[i]-a[i+1];
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