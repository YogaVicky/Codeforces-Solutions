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
		map<ll,ll>m,c;
		for(i=1;i<=n;i++){
			m[i]=0;
			c[i]=0;
		}
		for(i=1;i<=n;i++){
			ll k,j;
			cin>>k;
			vector<ll>a(k);
			for(j=1;j<=k;j++){
				cin>>a[j-1];
			}
			for(j=1;j<=k;j++){
				if(m[a[j-1]]==0){
					c[i]=1;
					m[a[j-1]]=1;
					break;
				}
			}
		}
		// for(i=1;i<=n;i++){
		// 	cout<<m[i]<<" ";
		// }
		// cout<<endl;
		// for(i=1;i<=n;i++){
		// 	cout<<c[i]<<" ";
		// }
		// cout<<endl;
		ll check=0;
		for(i=1;i<=n;i++){
			// cout<<c[i]<<" ";
			if(c[i]==0){
				cout<<"IMPROVE"<<endl;
				cout<<i<<" ";
				check=1;
				break;
			}
		}
		// cout<<endl;
		for(i=1;i<=n;i++){
			// cout<<m[i]<<" ";
			if(m[i]==0){
				cout<<i<<" "<<endl;
				break;
			}	
		}
		if(check==0)
			cout<<"OPTIMAL"<<endl;
	}
	return 0;
}