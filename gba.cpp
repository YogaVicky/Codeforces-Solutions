#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x;
	ll check=0,check1=0;
	cin>>n;
	map<ll,ll>mp;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0) a[i]*=-1;
		mp[a[i]]++;
	}
	ll count=0;
	for(auto it = mp.begin();it!=mp.end();it++){
		// cout<<it->first<<" "<<it->second<<endl;
		if(it->first==0)
			count++;
		else if(it->second==1)
			count++;
		else
			count+=2;
	}	
	cout<<count<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}