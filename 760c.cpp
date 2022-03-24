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
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll x=a[0],y=a[1];
	for(i=2;i<n;i++){
		if(i%2==0)
			x = __gcd(x,a[i]);
		else
			y = __gcd(y,a[i]);
	}
	ll check=1;
	for(i=0;i<n;i++){
		if(i%2==1 && a[i]%x==0)
			check=0;
	}
	if(check){
		cout<<x<<endl;
		return;
	}
	check=1;
	for(i=0;i<n;i++){
		if(i%2==0 && a[i]%y==0)
			check=0;
	}
	if(check){
		cout<<y<<endl;
		return;
	}
	cout<<0<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}