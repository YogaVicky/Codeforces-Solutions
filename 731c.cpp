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
	cin>>k>>n>>m;
	vector<ll>a(n),b(m);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	// cout<<"Hello"<<endl;
	i=0,j=0;
	vector<ll>ans;
	while(i<n || j<m){
		if(i<n && a[i]==0){
			ans.pb(a[i]);
			k++;
			i++;
			
		}
		else if(j<m && b[j]==0){
			ans.pb(b[j]);
			k++;
			j++;
			
		}
		else if(i<n && a[i]<=k){
			ans.pb(a[i]);
			i++;	
			// ans.pb(a[i]);
		}
		else if(j<m && b[j]<=k){
			ans.pb(b[j]);	
			j++;
			
		}
		else{
			cout<<-1<<endl;
			return;
		}
	}
	for(i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
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