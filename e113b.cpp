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
	ll W,H;
	cin>>W>>H;
	ll x1,x2,y1,y2,w,h;
	cin>>x1>>y1>>x2>>y2;
	cin>>w>>h;
	ll a,b,c,d;
	a = x2-x1;
	b = y2-y1;

	// if(w+a<=W && h+b<=H){

	// }
	ll m1=INT_MAX,m2=INT_MAX;
	if(w+a<=W){
		ll t = max(W-x2,x1);	
		// cout<<w-t<<endl;
		m1=w-t;
	}
	if(h+b<=H){
		ll t = max(H-y2,y1);	
		// cout<<h-t<<endl;
		m2=h-t;
	}
	if(w+a>W && h+b>H){
		cout<<-1<<endl;
	}
	else
		cout<<min(m1,m2)<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

DDRR DDRURD DRDR DRRD RDDR RDRD RRDD 
