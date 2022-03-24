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
	ll q;
	vector<ll>a(n),b(n),c(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
		c[i]=a[i];
	}
	cin>>q;
	ll x;
	ll ans[n][n];
	ll check=1;
	for(i=0;i<n;i++){
		ans[0][i]=b[i];
	}
	ll d=1;
	while(check){
		map<ll,ll>mp;
		for(i=0;i<n;i++){
			mp[b[i]]++;
		}
		check=0;
		for(i=0;i<n;i++){
			if(b[i]!=mp[b[i]]){
				b[i]=mp[b[i]];
				check=1;
			}
			ans[d][i]=b[i];
		}
		if(check==0)
			break;
		d++;
	}
	// cout<<"STOP "<<d<<endl;
	// for(i=0;i<=d;i++){
	// 	for(j=0;j<n;j++)
	// 		cout<<ans[i][j]<<" ";
	// 	cout<<endl;
	// }
	while(q--){
		cin>>x>>k;
		if(k<=d){
			cout<<ans[k][x-1]<<endl;	
		}
		else{
			cout<<b[x-1]<<endl;
		}
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
