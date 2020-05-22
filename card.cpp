#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	ll m = n;
	ll c = 2;
	ll count = 0,check=1;
	if(m<2)
		check=0;
	while(check){
		m-=c;
		if(m<0){
			m+=c;
			c=2;
			count++;
			if(m<2)
				break;
		}
		else{
			c+=3;
		}
	}
	cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}