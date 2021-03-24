#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(i=n-2;i>=0;i--){
		if(k){
			a[n-1]+=a[i];
			k--;
		}
		else
			break;
	}
	cout<<a[n-1]<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<1000;i++);
		for(i=0;i<1000000;i++);
	while(t--){
		solve();
	}
	return 0;
}