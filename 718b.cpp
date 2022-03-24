#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n>>m;
	vector<vector<ll>>a(n,vector<ll>(m));
	vector<pair<ll,pair<ll,ll>>>b;
	ll c;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
			b.pb({a[i][j],{i,j}});
		}
	}
	sort(b.begin(),b.end());
	for(i=0;i<m;i++){
		cout<<b[i].first<<" "<<b[i].second.first<<endl;
		swap(a[b[i].second.first][i],a[b[i].second.first][b[i].second.second]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}