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
	ll ans=0;
	ll a,b;
	cin>>a>>b;
	if(a==b || a+b==n+1){
		cout<<0<<endl;
		return;
	}
	if(abs(a-(n/2+1))%2!=0){
		ans++;
	}	
	if(abs(b-(n/2+1))%2!=0){
		ans++;
	}
	ans=ans%2;
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