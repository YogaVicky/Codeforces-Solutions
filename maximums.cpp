#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll n;
	cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll max = 0;
	for(ll i=0;i<n;i++){
		ll c = a[i]+max;
		cout<<c<<" ";
		if(max<c)
			max = c;
	}
	cout<<endl;
	return 0;
}