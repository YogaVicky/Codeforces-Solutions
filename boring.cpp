#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	ll m=n,d=0,num=m%10;
	while(m){
		d++;
		m/=10;
	}
	num--;
	ll ans = num*10;
	i=1;
	while(d--){
		ans+=i;
		i++;
	}
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