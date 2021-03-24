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
	ll count = 0;
	vector<ll>a(n);
	map<ll,ll>m;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=i-1;j>=0;j--){
			m[a[i]-a[j]]++;
		}
	}
	for(auto it = m.begin();it!=m.end();it++)
		count++;	
	cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}