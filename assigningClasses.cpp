#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		vector<ll>a(2*n);
		for(i=0;i<2*n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		cout<<a[(2*n)/2] - a[(2*n/2) -1]<<endl;
	}
	return 0;
}