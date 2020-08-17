#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll i,a,b,c;
	cin>>a>>b>>c;
	ll m = a-c;
	ll n = c-b;
	if(a==c || b==c)
		cout<<1<<endl;
	else if(n==m)
		cout<<2<<endl;
	else if(n%m==0 || m%n==0){
		if(n%m==0)
			cout<<1+n/m<<endl;
		else
			cout<<1+m/n<<endl;
	}
	else if(n>m){
		for(i=n;;i++){
			if()
		}
	}
	else{
		ll t = m-n;
		cout<<n-t<<endl; 
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