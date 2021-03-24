#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)



vector<vector<int>> C(300000,vector<int>(100,0));


ll printNcR(ll n, ll r)
{
 
    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            p%=mod;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd 
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
 
    else
        p = 1;
 
    // if our approach is correct p = ans and k =1
    return p;
}



void solve(){
	ll n,i,j,k,m;
	cin>>n>>m>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	ll count=0;
	for(i=0;i<n;i++){
		auto u = std::upper_bound(a.begin(), a.end(), a[i]+k);
		// cout<<u-a.begin()-i-1<<endl;
		if(u-a.begin()-i-1>=m-1){
			ll temp = C[u-a.begin()-i-1][m-1];
			count+= temp;
		}
	}
	cout<<count%mod<<endl;
}
int main(){
	ll t;
	for(int i=0;i<300000;++i){
		for(int j=0;j<100 and j<=i;++j){
			if(i==j or j==0)
				{C[i][j]=1;continue;}
			C[i][j]+=C[i-1][j];C[i][j]%= mod;
			C[i][j]+=C[i-1][j-1];C[i][j]%= mod;
		}
	}
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}