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
	ans=INT_MAX,check=0;
	if(m==1){
		check++;
		m++;
	}
	while(1){
		check1=n;
		temp=0;
		while(check1){
			check1/=m;
			temp++;
		}
		if(ans<temp+check)
			break;
		else
			ans=temp+check;
		// cout<<ans<<endl;
		check++;
		m++;
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

