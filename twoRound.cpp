#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
ll factorial(ll n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
ll fact(ll n); 
ll nCr(ll n, ll r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  
// Returns factorial of n 
ll fact(ll n) 
{ 
    ll res = 1; 
    for (ll i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
void solve(){
	ll n,i;
	cin>>n;
	cout<<factorial(n/2-1)*factorial(n/2-1)*nCr(n-1,n/2-1);
}
int main(){
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}