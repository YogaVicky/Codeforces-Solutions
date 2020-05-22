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
		--a[i];
	}
	// ll pos = 0;
	// while(pos<n){
	// 	ll nx = min_element(a.begin()+pos,a.end()) - a.begin();
	// 	// cout<<nx<<endl;
	// 	ll e = a[nx];
	// 	a.erase(a.begin()+nx);
	// 	a.insert(a.begin()+pos,e);
	// 	if(pos==nx)
	// 		pos = nx + 1;
	// 	else
	// 		pos = nx;
	// }
	ll ns = n-1,pos = 0;
	while(ns>0){
		ll check = 0;
		ll m = min_element(a.begin()+pos,a.end())-a.begin();
		ll e = a[m];
		a.erase(a.begin()+m);
		a.insert(a.begin()+pos,e);
		ns = ns - (m-pos);
		if(pos==m)
			pos++;
		else
			pos = m;
		if(pos>=n)
			check=1;
		if(check)
			break;
	}
	for(i=0;i<n;i++){
		cout<<a[i]+1<<" ";
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