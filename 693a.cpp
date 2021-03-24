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
	ll a,b,c;
	cin>>a>>b>>c;
	ll co1 = 1,co2=1;
	while(a%2==0){
		a/=2;
		co1*=2;
	}
	while(b%2==0){
		b/=2;
		co2*=2;
	}
	if(co1*co2>=c)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}