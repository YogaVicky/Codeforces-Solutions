#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,x;
	ll check=0,check1=0;
	cin>>n;
	vector<pair<string,ll>>a(n);
	string s;
	map<string,ll>m;
	ll ans=INT_MIN;
	string cans;
	for(i=0;i<n;i++){
		cin>>s>>x;
		a[i]={s,x};
		m[s]+=x;
	}		
	for(auto it = m.begin();it!=m.end();it++){
		if(it->second>ans)
			ans=it->second;
	}	
	cout<<ans<<endl;
	map<string,ll>m1;
	for(i=0;i<n;i++){
		m1[a[i].first]+=a[i].second;
		if(m1[a[i].first]>=ans && m[a[i].first]>=ans){
			cans=a[i].first;
			break;
		}
	}
	cout<<cans<<endl;
}
int main(){
	ll t,i;
	// cin>>t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}