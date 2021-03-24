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
	string s="";
	ll x = '9';
	ll check=0;
	if(n>45){
		cout<<-1<<endl;
		return;
	}
	if(n<=9){
		cout<<n<<endl;
		return;
	}
	if(n<=17){
		cout<<n-9<<9<<endl;
		return;
	}
	if(n<=24){
		cout<<n-17<<8<<9<<endl;
		return;
	}
	if(n<=30){
		cout<<n-24<<7<<8<<9<<endl;
		return;
	}
	if(n<=35){
		cout<<n-30<<6<<7<<8<<9<<endl;
		return;
	}
	if(n<=39){
		cout<<n-35<<5<<6<<7<<8<<9<<endl;
		return;
	}
	if(n<=42){
		cout<<n-39<<4<<5<<6<<7<<8<<9<<endl;
		return;
	}
	if(n<=44){
		cout<<n-42<<3<<4<<5<<6<<7<<8<<9<<endl;
		return;
	}
	if(n<=45){
		cout<<1<<2<<3<<4<<5<<6<<7<<8<<9<<endl;
		return;
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