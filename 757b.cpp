#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,sum=0;
	cin>>n;
	vector<ll>a(n);
	vector<pair<ll,ll>>v;
	map<ll,ll>mp;
	for(i=0;i<n;i++){
		cin>>a[i];
		v.push_back({a[i],i});
		mp[i]=a[i];
	}
	sort(v.begin(),v.end(),greater<pair<ll,ll>>());
	vector<pair<ll,ll>>ans;
	temp=1;
	for(i=0;i<n;i++){
		// cout<<mp[i]<<endl;
		if(temp<0)
			check+=(temp*-2)*mp[v[i].second];
		else
			check+=(temp*2)*mp[v[i].second];
		// cout<<check<<endl;
		ans.push_back({v[i].second,temp});
		if(temp>0)
			temp*=-1;
		else{
			temp*=-1;
			temp++;
		}
	}
	cout<<check<<endl;
	cout<<0<<" ";
	sort(ans.begin(),ans.end());
	for(i=0;i<n;i++){
		cout<<ans[i].second<<" ";
	}
	cout<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

