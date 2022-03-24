#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	string s;
	cin>>s;
	ll ans=10;
	ll m1=0,m2=0;
	ll x=5,y=5;
	for(i=0;i<10;i++){
		if(i%2==0){
			x--;
			if(s[i]=='1' ||s[i]=='?')
				m1++;
		}
		else{
			y--;
			if(s[i]=='1')
				m2++;	
		}
		if(m1-m2>y){
			ans=i+1;
			break;
		}
	}
	x=5;
	y=5;
	m1=0;
	m2=0;
	for(i=0;i<10;i++){
		if(i%2==0){
			x--;
			if(s[i]=='1')
				m1++;
		}
		else{
			y--;
			if(s[i]=='1' ||s[i]=='?')
				m2++;	
		}
		if(m2-m1>x && ans>=i+1){
			ans=i+1;
			break;
		}
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
