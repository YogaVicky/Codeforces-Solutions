#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,a;
	cin>>n;
	if(n%2==0)
		cout<<n/2<<" "<<n/2;
	else{
		// if(maxPrime1(n)==n){
		// 	cout<<1<<" "<<n-1;	
		// }
		// else
		// 	cout<<maxPrime1(n)<<" "<<n-maxPrime1(n);
		ll ans;
		for(i=1;i<=sqrt(n);i++){
			if((n-i)%i==0){
				// cout<<i<<endl;
				ans = i;
			}
		}
		cout<<ans<<" "<<n-ans;
	}
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}