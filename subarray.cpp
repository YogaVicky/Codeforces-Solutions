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
	for(i=0;i<n;i++)
		cin>>a[i];
	ll count = 0;
	for(i=0;i<n;i++){
		if(a[i]==1)
			count++;
	}
	ll sum = 0,count=0;
	for(i=0;i<n;i++){
		sum+=a[i];
		count++;
		if(sum==)
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}