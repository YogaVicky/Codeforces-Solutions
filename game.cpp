#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,k,s;
	cin>>n>>s;
	if(s<2*n)
		cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		for(i=0;i<n-1;i++)
			cout<<1<<" ";
		cout<<s-((n-1))<<endl;
		cout<<s-((n-1))-1;
	}
}
int main(){
	ll t=1;
	while(t--){
		solve();
	}
	return 0;
}