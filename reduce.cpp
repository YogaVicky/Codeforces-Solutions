#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
ll smallestDivisor(ll n) 
{ 
    // if divisible by 2 
    if (n % 2 == 0) 
        return 2; 
  
    // iterate from 3 to sqrt(n) 
    for (ll i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
  
    return n; 
} 
bool isPrime(ll n) 
{ 
    // Corner case 
    if (n <= 1) 
        return true; 
  
    // Check from 2 to n-1 
    for (ll i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
void solve(){
	ll n,i;
	cin>>n;
	if(isPrime(n))
		cout<<n-1<<endl;
	else
		cout<<smallestDivisor(n)<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}