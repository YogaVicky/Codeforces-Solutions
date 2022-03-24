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
	if(n==1 && m==2){
		cout<<0<<endl;
		return;
	}
	if(m%2==0){
		if(n<=m/2+1)
			cout<<m/2-1<<endl;
		else
			cout<<m-n<<endl;
	}
	else{
		if(n<=m/2+1)
			cout<<m/2<<endl;
		else
			cout<<m-n<<endl;	
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