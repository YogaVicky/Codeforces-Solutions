#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		vector<ll>a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(),a.end(),greater<ll>());
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}