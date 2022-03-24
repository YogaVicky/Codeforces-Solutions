#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n;
	vector<ll>a(n);
	ll x=0,y=0,z=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%3==0)
			x++;
		else if(a[i]%3==1)
			y++;
		else z++;
	}
	if(x>n/3){
		if(y>=n/3){
			ans+=(x-n/3)*2 + (y-n/3)*1;
		}
		else if(z>=n/3){
			ans+=(x-n/3)*1 + (z-n/3)*2;	
		}
		else{
			temp=x-n/3;
			ans+=(n/3-y)*1 + (n/3-z)*2;
		}
	}
	else if(y>n/3){
		if(x>=n/3){
			ans+=(x-n/3)*2 + (y-n/3)*1;
		}
		else if(z>=n/3){
			ans+=(z-n/3)*1 + (y-n/3)*2;	
		}
		else{
			temp=y-n/3;
			ans+=(n/3-z)*1 + (n/3-x)*2;
		}
	}
	else if(z>n/3){
		if(x>=n/3){
			ans+=(x-n/3)*1 + (z-n/3)*2;
		}
		else if(y>=n/3){
			ans+=(z-n/3)*1 + (y-n/3)*2;	
		}
		else{
			temp=z-n/3;
			ans+=(n/3-x)*1 + (n/3-y)*2;
		}
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

