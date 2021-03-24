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
	ll x;
	cin>>n>>x;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll sum=0;
	ll check=0;
	ll check1=0;
	for(i=0;i<n;i++){
		ll c = a[i];
		sum+=c;
		if(c%x!=0){
			for(j=i+1;j<n;j++){
				sum+=a[j];
			}
			cout<<sum<<endl;
			return;
		}
		while(c!=1){
			if(c%x==0){
				sum+=a[i];
				c/=x;
			}
			else{
				check=1;
				break;
			}
		}
		if(check)
			break;
	}
	i++;
	// cout<<sum<<" "<<i<<endl;
	for(;i<n;i++){
		if(a[i]%x==0)
			sum+=x*a[i];
		else
			break;
	}
	i++;
	for(;i<n;i++){
		sum+=a[i];
	}
	cout<<sum<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}