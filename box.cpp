#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c || b==d)cout<<abs(a-c)+abs(b-d)<<endl;
	else cout<<abs(a-c)+abs(b-d)+2<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}