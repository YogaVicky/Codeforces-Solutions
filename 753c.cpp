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
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);for(i=0;i<100000;i++);
						for(i=0;i<100000;i++);
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	if(n==1){
		cout<<a[0]<<endl;
		return;
	}
	sort(a.begin(),a.end());
	ll ans=a[0];
	for(i=1;i<n;i++){
		ans=max(ans,a[i]-a[i-1]);
	}
	cout<<ans<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);for(i=0;i<100000;i++);
						for(i=0;i<100000;i++);
	while(t--){
		solve();
	}
	return 0;
}
