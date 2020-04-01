#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		if(n%m==0)
			cout<<0<<endl;
		else{
			ll q = n/m;
			cout<<m*(q+1) - n<<endl;
		}
	}
	return 0;
}