#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
bool isPowerOfTwo(ll n) 
{ 
    if (n == 0) 
        return 0; 
    while (n != 1) 
    { 
        if (n%2 != 0) 
            return 0; 
        n = n/2; 
    } 
    return 1; 
} 
void solve(){
	ll n,i,j,k,m;
	cin>>n;
	if (isPowerOfTwo(n))
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}