#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n;
	// ll ans=0;

	ans=0;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll c=n;
	for(i=1;i<=n;i++){
		ans+= (i*c);
		c--;
	}
	for(i=0;i<n;i++){
		if(a[i]==0){
			ans+=((i+1)*(n-i));
		}
	}
	cout<<ans<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
