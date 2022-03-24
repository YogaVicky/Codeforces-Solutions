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
	vector<ll>a(n),b(20);
	ll s=0;
	for(i=0;i<20;i++){
		b[i]=0;
	}
	ll mx=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
		b[log2(a[i])]++;
	}
	n = log2(mx)+1;
	ll ans=1,check=1;
	// for(i=n-1;i>=0;i--){
	// 	cout<<b[i]<<" ";
	// }
	// cout<<endl;
	while(check){
		check=0;
		for(i=n-1;i>=0;i--){
			if(b[i]!=0)
				check=1;
		}
		if(check==0){
			break;
		}
		ll check2=0;
		for(i=n-1;i>=0;i--){
			if(s+pow(2,i)<=m && b[i]!=0){
				s+=pow(2,i);
				b[i]--;
				check2=1;
				break;
			}
		}
		// cout<<s<<endl;
		if(!check2){
			ans++;
			s=0;
		}
		// for(i=n-1;i>=0;i--){
		// 	cout<<b[i]<<" ";
		// }
		// cout<<endl;
		// cout<<ans<<endl;
	}
	cout<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}