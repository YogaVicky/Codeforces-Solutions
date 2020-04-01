#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		vector<ll>a(n),b(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		for(i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;		
	}
	return 0;
}