#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m;
	cin>>n>>m;
	ll mx=max(n,m),mi=min(n,m);
	ll p = m*n;
	if(p%2==0)
		cout<<p/2<<endl;
	else
		cout<<p/2 + 1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}