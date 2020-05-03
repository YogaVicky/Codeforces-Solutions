#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		vector<ll>a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		ll ans = 0,j=0;
		for(i=1;i<n;i++){
			ll diff=a[i-1]-a[i];
			ll c=0;
			while(diff>0)
			{
				c++;
				diff/=2;
			}
			if(a[i-1]-a[i]>=0)
				a[i]=a[i-1];
			ans=max(ans,c);
		}
		cout<<ans<<endl;	
	}
	return 0;
}