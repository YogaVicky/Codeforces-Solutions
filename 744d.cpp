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
	priority_queue<pair<ll,ll>>pq;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i])
			pq.push(make_pair(a[i],i));
	}
	vector<pair<ll,ll>>ans;
	while(pq.size()>1){
		pair<ll,ll>p1=pq.top();
		ll a=p1.first;
		pq.pop();
		pair<ll,ll>p2=pq.top();
		ll b=p2.first;
		pq.pop();
		ans.pb(make_pair(p1.second,p2.second));
		if(a>1)
			pq.push(make_pair(a-1,p1.second));
		if(b>1)
			pq.push(make_pair(b-1,p2.second));

	}
	cout<<ans.size()<<endl;
	for(i=0;i<ans.size();i++){
		cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
