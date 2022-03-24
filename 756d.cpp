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
	cin>>n;
	map<ll,ll>m;
	vector<ll>a(n),b(n);
	ll r;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==i+1)
			r=i+1;
		m[i+1]=a[i];
	}	
	for(i=0;i<n;i++)
		cin>>b[i];
	if(r!=b[0]){
		cout<<-1<<endl;
		return;
	}
	ll c[n];
	memset(c,-1,sizeof(c));
	ll d[n];
	memset(d,0,sizeof(d));
	c[r-1]=0;
	ll temp=0;
	for(i=1;i<n;i++){
		ll t = b[i];
		if(c[m[t]-1]==-1){
			cout<<-1<<endl;
			return;
		}
		temp++;
		d[t-1]=temp;
		c[t-1]=(d[t-1]-d[m[t]-1]);
	}
	for(i=0;i<n;i++)
		cout<<c[i]<<" ";
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