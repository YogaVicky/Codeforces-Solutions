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
	for(i=0;i<n;i++)
		cin>>a[i];
	ll check=1;
	for(i=0;i<n;i++){
		if(a[i]>m){
			check=0;
			break;
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]<=m){
				check=1;
				break;
			}
		}
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
