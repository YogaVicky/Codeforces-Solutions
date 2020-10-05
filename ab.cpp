#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	ll a,b;
	cin>>a>>b;
	if(a==b)
		cout<<0<<endl;
	else{
		ll c,d;
		c = max(a,b);
		d = min(a,b);
		ll e = c - d;
		if(e%10==0)
			cout<<e/10<<endl;
		else
			cout<<e/10+1<<endl;
	}
}	
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}