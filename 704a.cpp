#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll a,b,c;
	ll check=0,check1=0,temp=0;
	cin>>n>>a>>b>>c;
	ll ans;
	if(n%a==0){
		cout<<0<<endl;
		return;
	}
	else{
		ans=(a-n%a);
	}
	if(n%b==0){
		cout<<0<<endl;
		return;
	}
	else{
		ans=min(ans,b-n%b);
	}
	if(n%c==0){
		cout<<0<<endl;
		return;
	}
	else{
		ans=min(ans,c-n%c);
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