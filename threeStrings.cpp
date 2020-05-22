#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	string a,b,c;
	cin>>a>>b>>c;
	ll check = 0,count=0;
	for(i=0;i<a.length();i++){
		if(!(a[i]==c[i] || b[i]==c[i])) 
			check = 1;
	}
	if(check)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}