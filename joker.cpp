#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m,k;
	cin>>n>>m>>k;
	ll res;
	ll ans = n/k;
	ll j = m-ans;
	ll temp;
	if(m==0)
		cout<<0<<endl;
	else if(j<=0)
		cout<<m<<endl;
	else{
		n = n-ans;
		j = j;
		k--;
		if(j<=k)
			cout<<ans-1<<endl;
		else{
			if(j%k==0)
				 temp = j/k;
			else
				temp = j/k+1;
			cout<<ans-temp<<endl;
		}
	}
}
int main(){
	ll t,i;
	for(i=0;i<10;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}