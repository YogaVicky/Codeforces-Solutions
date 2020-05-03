#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,x,y,a,b;
	cin>>x>>y>>a>>b;
	ll res = 0;
	res = abs(y-x)*a;
	res+=min(min(y,x)*b,min(x,y)*a*2);
	cout<<res<<endl; 
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}