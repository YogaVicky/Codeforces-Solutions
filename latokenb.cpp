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
	cin>>n;
	int a[n],b[n+1];
	for(i=0;i<n;i++)
		cin>>a[i];
	ll in = 0;
	for(i=0;i<n;i++){
		b[i]=in-a[i];
		in=a[i];
	}
	b[i]=a[i-1];
	
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
