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
	cin>>n;
	if(n%2==0){
		cout<<n/2<<" "<<n/2-1<<" "<<1<<endl;
	}
	else{
		if((n/2)%2==0){
			cout<<n/2+1<<" "<<n/2-1<<" "<<1<<endl;
		}
		else{
			cout<<n/2-2<<" "<<n/2+2<<" "<<1<<endl;
		}
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}