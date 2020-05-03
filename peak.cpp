#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k;
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll l = 0,res=0,ans = 0;
	ll count[n]={0};
	for(i=1;i<n;i++){
		count[i]=count[i-1]+a[i]>a[i-1]&&a[i]>a[i+1];
	}
	for(i=0;i<=n-k;i++){
		if(count[i+k-2]-count[i]>res){
			res = count[i+k-2]-count[i];
			l = i;
		}
	}
	cout<<res+1<<" "<<l+1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}