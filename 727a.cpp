#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,sum=0;
	cin>>n>>x>>k;
	// vector<ll>a(n);
	// for(i=0;i<n;i++)
	// 	cin>>a[i];
	unsigned long long ans=0;
	if(x>k)
		cout<<0<<endl;
	else if(x==k)
		cout<<n-1<<endl;
	else{
		temp=k/x;
		// cout<<n-temp<<endl;
		if(n-temp>0){
			ans+=(n-temp)*temp;
			temp--;
			ans+=((temp*(temp+1))/2);
			cout<<ans<<endl;
		}
		else{
			temp=n-1;
			ans+=((temp*(temp+1))/2);
			cout<<ans<<endl;	
		}
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

