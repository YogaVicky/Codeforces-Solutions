#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m;
	cin>>n>>m;
	ll a,b;
	a=max(n,m);
	b=min(n,m);
		if(a<2*b)
			cout<<pow(2*b,2)<<endl;
		else
			cout<<pow(a,2)<<endl;	
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}