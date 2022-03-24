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
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll count=0;
	sort(a.begin(),a.end());
	// ll m=1;
	map<ll,ll>m;
	for(i=1;i<=n;i++)
		m[i]=0;
	for(i=0;i<n;i++){
		if(a[i]<=n && a[i]>0 && m[a[i]]==0){
			m[a[i]]++;
			continue;
		}
		else if(a[i]/2>m){
			m++;
			count++;
		}
		else{
			cout<<-1<<endl;
			return;
		}
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