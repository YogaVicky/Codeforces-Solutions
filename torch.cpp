#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m,k;
	ll tot = 0;
	cin>>n>>m>>k;
	tot+=k;
	ll s = (k*m) + k - 1;
	if(s%(n-1)==0)
		tot+=s/(n-1);
	else
		tot+=s/(n-1)  + 1;
	cout<<tot<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}