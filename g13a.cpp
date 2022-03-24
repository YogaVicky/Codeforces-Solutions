#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	cin>>n>>m;
	vector<ll>a(n*m),b(n*m);
	for(i=0;i<n*m;i++){
		cin>>a[i];
		cin>>b[i];
	}
	sort(b.begin(),b.end());
	ll ans=0;
	for(i=0;i<n*m;i++){
		for(j=0;j<i;j++){
			if(a[i]>a[j])
				ans++;
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
