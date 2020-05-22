#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,a,b,c,d;
	cin>>a>>b>>c>>d;
	ll s = a-b;
	if(s<=0)
		cout<<b<<endl;
	else if(c-d>0){
		ll temp;
		ll f = c-d; 
		if(s%(c-d)==0)
			temp = s/(c-d);
		else
			temp = s/(c-d)+1;
		// cout<<s<<" "<<temp<<endl;
		cout<<b+temp*c<<endl; 
	}
	else
		cout<<-1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}