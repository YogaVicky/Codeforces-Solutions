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
	ll x,y;
	cin>>n>>m>>x>>y;
	ll max=0,sum=0;
	vector<pair<ll,ll>>v;
	v.pb(make_pair(1,1));
	v.pb(make_pair(1,m));
	v.pb(make_pair(n,1));
	v.pb(make_pair(n,m));
	// for(i=0;i<4;i++){
	// 	cout<<v[i].first<<" "<<v[i].second<<endl;
	// }
	ll x1,x2;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			sum = abs(v[i].first-x)+abs(v[i].second-y)+abs(v[j].first-x)+abs(v[j].second-y)+abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
			if(sum>max){
				max = sum;
				x1=i;
				x2=j;
			}
		}
	}
	cout<<v[x1].first<<" "<<v[x1].second<<" "<<v[x2].first<<" "<<v[x2].second;
	cout<<endl;
}
int main(){
		ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);

	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
