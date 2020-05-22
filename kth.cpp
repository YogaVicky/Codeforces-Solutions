#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	ll c=0;
	ll c1 = n-1,l;
	if(k%c1==0)
		l = k/c1 - 1;
	else
		l = k/c1; 
	// cout<<n<<" "<<l<<endl;
	cout<<n*l + (k - c1*l)<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}