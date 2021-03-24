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
	cin>>n;
	ll sum=0;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	ll ans;
	for(i=n;i>=1;i--){
		if(sum%i==0){
			ll rs=sum/i;
			ll count=0;
			ll sum1=0;
			for(j=0;j<n;j++){
				sum1+=a[j];
				if(sum1==rs){
					count++;
					sum1=0;
				}
				else if(sum1>rs)
					break;
			}
			if(count==i){
				ans=count;
				break;
			}
		}
	}
	cout<<n-ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}