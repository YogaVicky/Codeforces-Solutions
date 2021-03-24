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
	ll max=1;
	for(i=0;i<n;i++){
		ll max1=1;
		ll l=i-1,r=i+1;
		while(l>=0 && a[l]<=a[l+1]){
			l--;
			max1++;
		}
		while(r<n && a[r]<=a[r-1]){
			r++;
			max1++;
		}
		if(max1>max)
			max=max1;
	}
	cout<<max<<endl;
}
int main(){
	ll t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}