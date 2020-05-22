#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,a,b,s;
	cin>>a>>b>>n>>s;
	if(s>n*a){
		if(s-n*a<=b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
	}
	else{
		if(s%n<=b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}