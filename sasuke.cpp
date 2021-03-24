#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=n-1;i>=n/2;i--){
		a[i]*=-1;
		cout<<a[i]<<" ";
	}
	for(i=n/2-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}