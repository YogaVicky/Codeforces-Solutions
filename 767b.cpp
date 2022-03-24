#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	ll l,r;
	cin>>l>>r>>k;
	if(l==1 && r==1){
		cout<<"NO"<<endl;
		return;
	}
	if(l==r){
		cout<<"YES"<<endl;
		return;
	}
	ll count = 0;
	// cout<<count<<endl;
	if(l%2==0 && r%2==0){
		count=(r-l)/2;
	}
	else if(l%2==1 && r%2==1){
		count=(r-l)/2+1;
	}
	else{
		count=(r-l)/2+1;
	}
	if(count>k)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
		
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}