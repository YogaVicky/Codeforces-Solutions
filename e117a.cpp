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
	cin>>n>>m;
	ll t = n+m;
	if(t%2!=0){
		cout<<-1<<" "<<-1<<endl;
		return;
	}
	if(n>m){
		cout<<t/2<<" "<<0<<endl;
	}
	else
		cout<<0<<" "<<t/2<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}