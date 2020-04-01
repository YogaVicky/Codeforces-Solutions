#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,m,a,b;
		cin>>n>>m>>a>>b;
		ll c = n - a -1;
		ll d = m - b -1;
		ll max1 = 0,max2 = 0;
		max1 = max(a,c)*m;
		max2 = max(b,d)*n;
		cout<<max(max1,max2)<<endl;
	}
	return 0;
}