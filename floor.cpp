#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	ll f = 1;
	n-=2;
	// while(n>0){
	// 	n-=k;
	// 	f++;
	// }
	if(n>0){
		if(n%k==0)
			f+=n/k;
		else
			f+=n/k + 1;
	}
	cout<<f<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}