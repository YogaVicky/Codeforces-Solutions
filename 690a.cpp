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
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	// for(i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	ll l=0,r=n-1;
	while(l!=r && l<r){
		cout<<a[l]<<" "<<a[r]<<" ";
		l++;
		r--;
	}
	if(l==r){
		cout<<a[l]<<" ";
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