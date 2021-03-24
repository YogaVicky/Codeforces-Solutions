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
	cin>>n>>m;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll count=0;
	if(a[m-1])
		count++;
	ll l = m-2,r=m;
	while(l>=0 && r<n){
		if(a[l]&&a[r])
			count+=2;
		l--;
		r++;
	}
	while(l>=0){
		if(a[l])
			count++;
		l--;
	}
	while(r<n){
		if(a[r])
			count++;
		r++;
	}
	cout<<count<<endl;
}
int main(){
	ll t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}