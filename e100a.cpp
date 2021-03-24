#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	// ll n,i,j,k,m;
	// cin>>n;
	ll a,b,c;
	cin>>a>>b>>c;
	ll sum=a+b+c;
	ll d = sum/9;
		
	if(a<d){
		cout<<"NO"<<endl;
		return;	
	}
	if(b<d){
		cout<<"NO"<<endl;
		return;	
	}
	if(c<d){
		cout<<"NO"<<endl;
		return;	
	}
	if(sum%9==0)
			cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
	// vector<ll>a(n);
	// for(i=0;i<n;i++){
	// 	cin>>a[i];
	// }
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}