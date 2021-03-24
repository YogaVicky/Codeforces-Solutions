#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	ll a = sqrt(n);
	ll ans = 2*(a-1);
	ans+=(n-(a*a))%a==0?(n-(a*a))/a:(n-(a*a))/a+1;
	cout<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}