#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll dp[n+1];
	for(i=1;i<=n;i++)
		dp[i]=1;
	for(i=1;i<=n;i++){
		for(j=i*2;j<=n;j+=i){
			if(a[i-1]<a[j-1])
				dp[j]=max(dp[j],dp[i]+1);
		}
	}
	// for(i=1;i<=n;i++)
	// 	cout<<dp[i]<<" ";
	// cout<<endl;
	ll maxi = 1;
	for(i=1;i<=n;i++){
		if(dp[i]>maxi)
			maxi = dp[i];
	}
	cout<<maxi<<endl;
}	
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}