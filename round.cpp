#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	ll m = n,c;
	ll count = 0;
	vector<ll>a;
	while(m){
		c = m%10;
		a.pb(c);
		m/=10;
	}
	for(i=0;i<a.size();i++){
		if(a[i]!=0)count++;
	}
	cout<<count<<endl;
	for(i=0;i<a.size();i++){
		if(a[i]!=0)
			cout<<a[i]*pow(10,i)<<" ";
	}
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