#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k,a,b,c,d;
	cin>>n>>k;
	ll check = 0;
	while(n--){
		cin>>a>>b>>c>>d;
		if(b==c)
			check=1;
	}
	if(k%2==1){
		cout<<"NO"<<endl;
		return;
	}
	else if(check==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}