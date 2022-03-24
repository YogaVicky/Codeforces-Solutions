#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x;
	ll check=0,check1=0;
	cin>>m>>n;
	vector<vector<ll>>a(m,vector<ll>(n,0));
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	// for(i=0;i<m;i++){
	// 	for(j=0;j<n;j++)
	// 		cout<<a[i][j]<<" " ;
	// 	cout<<endl;
	// }
	ll ans=0;
	ll st=0,ed=1e9,mid;
	while(st<=ed){
		mid=(st+ed)/2;
		check=0;
		vector<ll>b(n,0);
		for(i=0;i<m;i++){
			check1=0;
			for(j=0;j<n;j++){
				if(a[i][j]>=mid){
					if(check1==1)
						check=1;
					check1=1;
					b[j]=1;
				}
			}
		}
		for(i=0;i<n;i++){
			// cout<<b[i]<<" ";
			if(b[i]==0)
				check=0;
		}
		if(check){	
			ans=max(ans,mid);
			st=mid+1;
		}
		else{
			ed=mid-1;
		}
	}
	// for(i=0;i<n;i++){
	// 	cout<<b[i]<<" ";
	// 	if(b[i]==0)
	// 		check=0;
	// }
	// cout<<endl;
	cout<<ans<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}