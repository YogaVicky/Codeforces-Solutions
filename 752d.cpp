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
	if((n+m)%2==0){
		if(n<m)
			cout<<(n+m)/2<<endl;
		else
			cout<<n+m<<endl;
	}
	else{
		if(n>m)
			cout<<n+m<<endl;
		else{
			ll c=m/n;
			c=n*c;
			cout<<(m+c)/2<<endl;
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
