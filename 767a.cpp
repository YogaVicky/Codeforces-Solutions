#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n>>k;
	m = k;
	vector<pair<ll,ll>>p;
	vector<ll>a(n),b(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	for(i=0;i<n;i++){
		p.pb(make_pair(a[i],b[i]));
	}
	sort(p.begin(),p.end());
	sort(p.begin(),p.end());
	for(i=0;i<n;i++){
		if(p[i].first<=m){
			m+=p[i].second;
		}
	}
	cout<<m<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}