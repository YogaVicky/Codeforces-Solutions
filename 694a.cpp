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
	cin>>n>>m;
	vector<ll>a(n);
	ll count=0;
	ll sum =0;
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		if(a[i]%m==0)
			count+=a[i]/m;
		else
			count+=a[i]/m+1;
	}
	if(sum%m==0)
		cout<<sum/m<<" ";
	else
		cout<<sum/m + 1<<" ";
	cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}