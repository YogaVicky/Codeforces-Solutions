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
		for(i=0;i<n;i++)
			cin>>a[i];
		ll test[11] = {2,3,5,7,11,13,17,23,29,19,31};
		map<ll,ll>m1;
		ll k = 1;
		for(j=0;j<11;j++){
			ll check=0;
			for(i=0;i<n;i++){
				if(m1.find(i+1)==m1.end() && a[i]%test[j]==0){
					m1[i+1]=k;
					check = 1;		
				}
			}
			if(check==1)
				k++;
		}
		cout<<k-1<<endl;
		for(auto it = m1.begin();it!=m1.end();it++)
			cout<<it->second<<" ";
		cout<<endl;
	}
	return 0;
}