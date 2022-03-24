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
	ll x1,x2,y1,y2,a,b;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>a>>b;
	ll ans = abs(x2-x1)+abs(y2-y1);
	if(x1==x2 && x1==a && ((b<y2 &&b>y1)||(b<y1 &&b>y2)))
		ans+=2;
	if(y1==y2 && y1==b && ((a<x2 &&a>x1)||(a<x1 &&a>x2)))
		ans+=2;
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