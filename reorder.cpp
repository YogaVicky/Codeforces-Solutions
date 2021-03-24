#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m;
	cin>>n>>m;
	ll sum=0;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum==m)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<1000;i++);
	for(i=0;i<1000;i++);
	for(i=0;i<1000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}