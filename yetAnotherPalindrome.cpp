#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,j;
		cin>>n;
		vector<ll>a(n);
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		string ans = "NO";
		for(i=0;i<n-2;i++){
			for(j=i+2;j<n;j++){
				if(a[i]==a[j])
					ans = "YES";
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}