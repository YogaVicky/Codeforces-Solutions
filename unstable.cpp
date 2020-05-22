#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m;
	cin>>n>>m;
	if(n==1)
		cout<<0<<endl;
	else if(n==2)
		cout<<m<<endl;
	else
		cout<<2*m<<endl;

}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10;i++);
	while(t--){
		solve();
	}
	return 0;
}