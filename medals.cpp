#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k;
	cin>>n;
	string s;
	cin>>s;
	ll c1=0,c2=0;
	for(i=0;i<s.length();i++){
		if(s[i]=='L')
			c1+=i;		
	}
	for(i=s.length()-1;i>=0;i--){
		if(s[i]=='R')
			c2+=(s.length()-1-i);
	}
	cout<<abs(c1-c2)<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}