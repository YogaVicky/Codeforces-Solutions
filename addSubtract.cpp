#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,m;
		cin>>n>>m;
		if(n==m){
			cout<<0<<endl;
			continue;
		}
		if((n-m)%2==0){
			if(n>m){
				cout<<1<<endl;
				continue;
			}
			else{
				cout<<2<<endl;
				continue;	
			}
		}
		else{
			if(n>m){
				cout<<2<<endl;
				continue;
			}
			else{
				cout<<1<<endl;
				continue;	
			}	
		}
	}
	return 0;
}