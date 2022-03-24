#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	m=INT_MAX;
	ll ind;
	for(i=1;i<n;i++){
		if(a[i]-a[i-1]<m){
			ind=i;
			m = a[i]-a[i-1];
		}
	}
	// cout<<ind<<endl;
	cout<<a[ind-1]<<" ";
	for(i=ind+1;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(i=0;i<ind-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[ind]<<endl;
}
int main(){
		ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
