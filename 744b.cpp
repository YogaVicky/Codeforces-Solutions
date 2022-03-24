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
	cin>>n;
	vector<ll>a(n);
	n = a.size();
	for(i=0;i<n;i++)
		cin>>a[i];
	ll check=1;
	j=0;
	vector<vector<ll>>ans;
	while(check){
		ll check1=0;
		for(i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				check1=1;
				break;
			}
		}
		if(check1==0)
			break;
		m=INT_MAX;
		k=-1;
		for(i=j;i<n;i++){
			if(a[i]<m){
				k=i;
				m=a[i];
			}
		}
		// cout<<k<<endl;
		// break;
		if(j!=k){
			vector<ll>b;
			b.pb(j+1);
			b.pb(k+1);
			b.pb(k-j);
			ans.pb(b);
			// cout<<j+1<<" "<<k+1<<" "<<k-j<<endl;
			ll l;
			ll temp = a[k];
			for(l=k;l>j;l--)
				a[l]=a[l-1];
			a[j]=temp;	
		}
		// for(i=0;i<n;i++)
		// 	cout<<a[i]<<" ";
		// cout<<endl;
		j++;
	}
	cout<<ans.size()<<endl;
	for(i=0;i<ans.size();i++){
		vector<ll>b = ans[i];
		cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
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
