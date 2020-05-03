#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,x,i,j;
		cin>>n>>x;
		vector<ll>a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(),a.end(),greater<ll>());

		for(i=0;i<n-1;i++){
			if(a[i]>x){
				a[i+1]+=a[i]-x;
			}
		}
		ll count = 0;
		for(i=0;i<n;i++){
			// cout<<a[i]<<" ";
			if(a[i]>=x)
				count++;
		}
		// cout<<endl;
		cout<<count<<endl;
	}
	return 0;
} 