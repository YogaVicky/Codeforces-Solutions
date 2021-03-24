#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>b(n);
	map<ll,ll>m;
	for(i=0;i<n;i++){
		cin>>b[i];
		m[b[i]]++;
	}
	for(auto it = m.begin();it!=m.end();it++){
		cout<<it->first<<" ";
		it->second = it->second-1;
	}
	for(auto it = m.begin();it!=m.end();it++){
		for(i=0;i<it->second;i++)
			cout<<it->first<<" ";
	}
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