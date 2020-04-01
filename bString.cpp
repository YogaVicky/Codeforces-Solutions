#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main() 
{ 
	ll t;
	cin>>t;
	while(t--){
		ll n,k,i,j;
		cin>>n>>k;
		ll i1=0,i2;
		for(i=1;i<n;i++){
			i1+=i;
			if(k<=i1){
				i2 = i1-k;
				i1 = i;
				break;
			}
		}
		i1 = n - i1 - 1;
		i2 = i1 + i2 + 1;
		for(i=0;i<n;i++){
			if(i==i1||i==i2)
				cout<<"b";
			else
				cout<<"a";
		}
		cout<<endl;
	} 
	return 0; 
} 
