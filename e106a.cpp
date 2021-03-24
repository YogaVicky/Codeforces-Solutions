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
	ll x,y;
	cin>>n>>m>>k;
	cin>>x>>y;
	for(i=0;i<10000;i++);
	if(x==0 && y==0)
		cout<<"YES"<<endl;
	else{
		ll w = m+k;
		ll b = n*2 - w;
		if(x*2 <= w && y*2<=b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);

	while(t--){
		solve();
	}
	return 0;
}