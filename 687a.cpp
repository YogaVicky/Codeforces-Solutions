#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
    ll a,b,c,d;
	cin>>a>>b>>c>>d;
    cout<<max(max(abs(d-1) + abs(c-1) , abs(c-1) + abs(d-b)) , max(abs(d-b) + abs(c-a) , abs(c-a) + abs(d-1)));
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