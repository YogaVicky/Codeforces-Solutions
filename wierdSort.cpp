#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m,i;
		cin>>n>>m;
		vector<ll>a(n),b(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<m;i++){
			ll c;
			cin>>c;
			b[c-1]=1;
		}
		ll j;
		for(i=0;i<n;i++){
			if(b[i]==0)
				continue;
			j = i;
			while(b[j] && j<n)
				j++;
			sort(a.begin()+i,a.begin()+j+1);
			i = j;
		}
		ll check = 0;
		for(i=0;i<n;i++){
			if(a[i]>a[i+1]){
				check = 1;
				break;
			}
		}
		if(check==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}