#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,m;
	cin>>n>>m;
	ll a[n][m];
	ll count = 0;
	ll z = 0;
	ll mi =  INT_MAX;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j]; 
			mi = min(abs(a[i][j]),mi);
			if(a[i][j]<0){
				count++;
			}
			if(a[i][j]==0)
				z++;
		}
	}
	ll sum = 0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			sum+=abs(a[i][j]);
		}
	}
	if(z>0 || count%2==0)
		cout<<sum<<endl;
	else{
		cout<<sum-2*mi<<endl;
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