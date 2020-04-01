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
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		ll j;
		ll check=0;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(abs(a[j]-a[i])%2!=0)
					check=1;
			}
		}
		if(check==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}