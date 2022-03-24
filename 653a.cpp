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
	cin>>n>>m>>k;
	ll r,c;
	if(k%n==0){
		r = n;
		c = k/n;
	}
	else{
		r = k%n;
		c = k/n +1;
	}
	cout<<m*(r-1) + c<<endl;;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}