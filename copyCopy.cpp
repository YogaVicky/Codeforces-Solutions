#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,c;
		cin>>n;
		set<ll>a;
		for(i=0;i<n;i++){
			cin>>c;
			a.insert(c);
		}
		cout<<a.size()<<endl;
	}
	return 0;
}