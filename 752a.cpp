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
	cin>>n;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						
	ll ans=0;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]>i+1+ans)
			ans+=(a[i]-(i+1+ans));
		// cout<<ans<<endl;
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
