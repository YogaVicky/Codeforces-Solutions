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
	cin>>n>>m;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	vector<vector<ll>>b;
	for(i=0;i<n;i++){
		x=a[i];
		vector<ll>t(m);
		j=0;
		while(a[i]){
			t[j]=a[i]%2;
			a[i]/=2;
			j++;
		}
		b.pb(t);
	}
	sort(a.begin(),a.end());
	for(i=0;i<m;i++){
		x=0,y=0;
		for(j=0;j<n;j++){
			if(b[j][i]==1)
				x++;
			else
				y++;
		}
		if(x>y)
			ans+=1<<i;
	}
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