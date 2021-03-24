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
	ll a1,b1;
	cin>>a1>>b1>>k;
	map<ll,ll>m1,m2;
	vector<ll>a(k),b(k);
	for(i=0;i<k;i++){
		cin>>a[i];
		m1[a[i]]++;
	}
	for(i=0;i<k;i++){
		cin>>b[i];
		m2[b[i]]++;
	}
	ll count=1;
	if(k==1){
		cout<<0<<endl;
		return;
	}
	for(i=0;i<k;i++){
		if(k-i-1)
			count*=(k-i-1);
	}
	for(auto it = m1.begin();it!=m1.end();it++){
		count-=(it->second)/2;
	}
	for(auto it = m2.begin();it!=m2.end();it++){
		count-=(it->second)/2;
	}
	cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}