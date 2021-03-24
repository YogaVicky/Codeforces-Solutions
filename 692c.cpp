#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k;
	cin>>n>>k;
	map<ll,ll>m;
	for(i=0;i<n;i++)
		m[i]=0;
	ll x,y;
	ll count=0;
	for(i=0;i<k;i++){
		cin>>x>>y;
		if(x!=y)
			count++;
		m[x]++;
		m[y]++;
	}
	ll check=0;
	for(auto it = m.begin();it!=m.end();it++){
		if(it->second==1){
			check=1;
			break;
		}
	}	
	if(count==0)
		cout<<count<<endl;
	if(check==1)
		cout<<count<<endl;
	else
		cout<<count+1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}