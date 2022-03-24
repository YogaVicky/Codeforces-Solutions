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
	// cin>>n;
	ll a,b,c,d;
	// vector<ll>a(n);
	// for(i=0;i<n;i++)
	// 	cin>>a[i];
	cin>>a>>b>>c>>d;
	if(a%2==1 && b%2==1 && c%2==1){
		cout<<"YES"<<endl;
	}
	else if((a%2==1 && b%2==1) || (a%2==1 && c%2==1) || (c%2==1 && b%2==1)){
		if(a==0 || b==0 || c==0 || d%2==0){
			cout<<"NO"<<endl;
		}
		else
			cout<<"YES"<<endl;
	}
	else if(a%2==1 || b%2==1 || c%2==1){
		if(d%2==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
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

