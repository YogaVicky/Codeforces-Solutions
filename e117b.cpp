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
	ll a,b;
	cin>>n>>a>>b;
	vector<ll>c;
	if(a>(n/2+1) || b<(n/2))
		cout<<-1<<endl;
	else{
		ll t=n;
		for(i=0;i<n/2-1;i++){
			if(t==b || t==a){
				i--;
				t--;
				continue;
			}
			// cout<<t<<" ";
			c.pb(t);
			t--;
		}
		// cout<<a<<" ";
		c.pb(a);
		t=1;
		for(i=0;i<n/2-1;i++){
			if(t==b || t==a){
				i--;
				t++;
				continue;
			}
			// cout<<t<<" ";
			c.pb(t);
			t++;
		}
		// cout<<b<<" ";
		c.pb(b);
		// cout<<endl;
		ll check=1;
		ll temp=c[0];
		for(i=0;i<n/2;i++){
			temp=min(temp,c[i]);
		}
		// cout<<temp<<endl;
		if(temp!=a)
			check=0;
		temp=c[n/2];
		for(i=n/2;i<n;i++){
			temp=max(temp,c[i]);
		}
		if(temp!=b)
			check=0;
		if(check==0)
			cout<<-1<<endl;
		else{
			for(i=0;i<n;i++)
				cout<<c[i]<<" ";
			cout<<endl;
		}
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}