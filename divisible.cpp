#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m,j,k;
	cin>>n>>m>>k;
	vector<vector<ll>>a;
	for(i=0;i<n;i++){
		vector<ll>b;
		ll in;
		for(j=0;j<m;j++){
			cin>>in;
			b.pb(in);
		}
		a.pb(b);
	}
	for(i=0;i<n;i++){
		sort(a[i].begin(),a[i].end());
	}
	// for(i=0;i<n;i++){
	// 	for(j=0;j<m;j++)
	// 		cout<<a[i][j]<<" ";
	// 	cout<<endl;
	// 	// sort(a[i].begin(),a[i].end());
	// }
	ll ans = 0;
	for(i=0;i<n;i++){
		ll count=m/2;
		for(j=m-1;j>=0;j--){
			if(count){
				// cout<<a[i][j]<<endl;
				ans+=a[i][j];
				count--;
			}
		}
	}
	ll d = ans/k;
	cout<<k*d<<endl;
}
int main(){
	ll t=1;
	// cin>>t;
	ll i;
	while(t--){
		solve();
	}
	return 0;
}