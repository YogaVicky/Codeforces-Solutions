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
	cin>>n>>m;
	vector<ll>a(n);
	ll x,y;
	vector<vector<ll>>g;
	for(i=0;i<n;i++){
		vector<ll>temp;
		g.pb(temp);
	}
	ll r[n]={0},l[n]={0};
	for(i=0;i<n-1;i++){
		cin>>x>>y;
		g[x-1].pb(y-1);
		g[y-1].pb(x-1);
		r[x-1]++;
		r[y-1]++;
	}
	queue<ll>q;
	for(i=0;i<n;i++){
		if(r[i]==1){
			l[i]=1;
			q.push(i);
		}
	}
	stack<ll>st;
	while(!q.empty()){
		ll v=q.front();
		q.pop();
		st.push(v);
		// r[v]--;
		vector<ll>temp=g[v];
		for(i=0;i<temp.size();i++){
			if(r[temp[i]]!=1){
				r[temp[i]]--;
				if(r[temp[i]]==1){
					l[temp[i]]=l[v]+1;
					q.push(temp[i]);
				}
			}
		}
	}
	ll ans=0;
	// for(i=0;i<n;i++){
	// 	cout<<l[i]<<" ";
	// }
	// cout<<endl;
	while(!st.empty()){
		ll temp=st.top();
		st.pop();
		cout<<temp<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++){
		if(l[i]>m)
			ans++;
	}
	cout<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
