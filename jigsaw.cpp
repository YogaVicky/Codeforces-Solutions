#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
bool check(ll n) 
{ 
    // Corner case 
    if (n <= 1) 
        return true; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
void solve(){
	ll n,i,m;
	cin>>n>>m;
	if((n==1 or m==1) or (n==2 and m == 2))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}