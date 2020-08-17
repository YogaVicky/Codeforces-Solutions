#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k,z;
	cin>>n>>k>>z;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll sum = a[0];
	for(i=1;i<k+1;i++)
		sum+=a[i];
	for(i=1;i<=z;i++){
		ll sum1 = a[0];
		ll p=0;
		for(j=0;j<k+1-(i*2+1);j++){
			ll temp = a[j]+a[j+1];
			if(p<temp)
				p = temp;
		}
		// cout<<p<<endl;
		for(j=1;j<=k+1-(i*2+1);j++)
			sum1+=a[j];
		sum1+=p*i;
		// cout<<sum1<<endl;
		if(sum1>sum)
			sum = sum1;
	}
	cout<<sum<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}