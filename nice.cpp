#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k=0,m;
	cin>>n>>m;
	ll a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	ll ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			vector<ll>b;
			b.pb(a[i][m-j-1]);
			b.pb(a[i][j]);
			b.pb(a[n-i-1][j]);
			sort(b.begin(),b.end());
			ans+=abs(b[1]-a[i][m-j-1]) + abs(b[1]-a[i][j]) + abs(b[1]-a[n-i-1][j]);
			a[i][m-j-1] = b[1];
			a[i][j] = b[1];
			a[n-i-1][j] = b[1];
		}
	}
	cout<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}