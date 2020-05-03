#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,a,b,c,d;
	cin>>n>>a>>b>>c>>d;
	if((a+b)*n>=c-d && (a-b)*n<=(c+d))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}