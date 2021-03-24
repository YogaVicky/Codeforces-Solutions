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
	cin>>n>>m;
	m = m-3;
	for(i=0;i<m;i++){
		cout<<1<<" ";
	}
	if(n%2==0){
		if(n%4==0){
			cout<<n/4<<" "<<n/4<<" "<<n/2<<endl;
		}
		else{
			cout<<2<<" "<<n/2-1<<" "<<n/2-1<<endl;
		}
	}
	else{
		cout<<1<<" "<<n/2<<" "<<n/2<<endl;
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