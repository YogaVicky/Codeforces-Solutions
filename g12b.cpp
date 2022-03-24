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
	vector<pair<ll,ll>>a(n);
	for(i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	ll count=0;
	for(i=0;i<n;i++){
		check=0;
		temp=0;
		for(j=0;j<n;j++){
			// cout<<abs(a[i].first-a[j].first)+abs(a[i].second-a[j].second)<<endl;
			if(abs(a[i].first-a[j].first)+abs(a[i].second-a[j].second)<=k){
				temp++;
				// temp++;
			}
		}
		count=max(count,temp);
	}
	if(count==n)
		cout<<1<<endl;
	else
		cout<<-1<<endl;

}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

