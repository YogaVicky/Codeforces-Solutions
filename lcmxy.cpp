#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k,m;
	cin>>n>>m;
	ll f = 2;
	if(n*2<=m){
		cout<<n<<" "<<2*n<<endl;
	}
	else
		cout<<-1<<" "<<-1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}