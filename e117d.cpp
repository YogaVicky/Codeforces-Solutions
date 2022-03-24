#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

bool recur(ll n,ll m,ll k){
	if(n==0 || m==0)
		return false;
	else if(abs(n-m)==k){
		return true;
	}
	else{
		if(recur(abs(n-m),m,k) || recur(n,abs(n-m),k)){
			return true;		
		}
		else{
			return false;	
		}
	}
}
void solve(){
	ll n,i,j,k,m;
	cin>>n>>m>>k;
	ll dp[n][m][k];
	memset(dp,0,sizeof(dp));
	if(recur(n,m,k))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	int h = (1<<0) -1;
	cout<<h<<endl;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}