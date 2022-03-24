#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

ull factorial(ull n) {
    ull factorial = 1;
    for (ull i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial%mod;
}
 
ull nCr(ull n, ull r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

ull nPr(ull n, ull r) {
    return factorial(n) / (factorial(n - r));
}


void solve(){
	ull n,i,j,k,m,x,y;
	ull check=0,check1=0;
	cin>>n>>k;
	ull ans=n;
	for(i=1;i<k;i++){
		ans=(ans*n)%mod;
	}
	cout<<ans<<endl;
}
int main(){
	ull t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}