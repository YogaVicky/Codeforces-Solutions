#include<bits/stdc++.h>
using namespace std;
#define ll long long unsigned int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	n--;
	ll c = 8,sum=0,k=1;
	while(n>0){
		sum+=c*k;
		k++;
		c=c+8;
		n = n-2;
	}
	cout<<sum<<endl;
}
int main(){
	ll t;
	cin>>t;
	// ll te = 41664916690999888;
	// cout<<te<<endl;
	while(t--){
		solve();
	}
	return 0;
}