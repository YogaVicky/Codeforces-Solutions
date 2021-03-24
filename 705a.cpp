#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n>>k;
	ll count = (n-k) + k/2;
	cout<<count<<endl;
	for(i=k+1;i<=n;i++)
		cout<<i<<" ";
	ll check = k/2;
	for(i=0;i<check;i++){
		cout<<k-1<<" ";
		k--;
	}
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