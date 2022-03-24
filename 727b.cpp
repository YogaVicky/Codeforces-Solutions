#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n>>k;
	// vector<ll>a(n);
	string s;
	cin>>s;
	ll a[26][n+1];
	for(i=0;i<26;i++){
		check=0;
		a[i][0]=0;
		for(j=0;j<n;j++){
			if(s[j]==char('a'+i)){
				a[i][j+1]=a[i][j]+1;
			}
			else
				a[i][j+1]=a[i][j];
			// cout<<a[i][j+1]<<" ";	
		}
		// cout<<endl;
	}
	for(i=0;i<k;i++){
		ll l,r;
		cin>>l>>r;
		ans=0;
		for(j=0;j<26;j++){
			// cout<<a[j][r]-a[j][l-1]<<endl;
			ans+=(a[j][r]-a[j][l-1])*(j+1);
		}
		cout<<ans<<endl;	
	}
}
int main(){
	ll t=1,i;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

