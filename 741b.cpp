#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

bool checkPrime(ll n){
	ll i;
	if(n==1)
		return true;
	for(i=2;i<n;i++){
		if(n%i==0)
			return true;
	}
	return false;
}

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	string s;
	cin>>s;
	for(i=0;i<n;i++){
		ll num = (s[i]-'0');
		if(checkPrime(num)){
			cout<<1<<endl;
			cout<<num<<endl;
			return;
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			ll num=0;
			num+=(s[i]-'0');
			num*=10;
			num+=(s[j]-'0');
			if(checkPrime(num)){
				cout<<2<<endl;
				cout<<num<<endl;
				return;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++){
				ll num=0;
				num+=(s[i]-'0');
				num*=10;
				num+=(s[j]-'0');
				num*=10;
				num+=(s[k]-'0');
				if(checkPrime(num)){
					cout<<2<<endl;
					cout<<num<<endl;
					return;
				}
			}
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