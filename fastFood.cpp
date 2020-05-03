#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		if(a<b){
			a = a+b;
			b = a-b;
			a = a-b;
		}
		if(a<c){
			a = a+c;
			c = a-c;
			a = a-c;	
		}
		ll count = 0;
		if(a!=0){
			a--;
			count++;		
		}
		if(b!=0){
			b--;
			count++;		
		}
		if(c!=0){
			c--;
			count++;		
		}
		if(a!=0 && b!=0){
			a--;
			b--;
			count++;
		}
		if(a!=0 && c!=0){
			a--;
			c--;
			count++;
		}
		if(b!=0 && c!=0){
			c--;
			b--;
			count++;
		}
		if(a!=0 && b!=0 && c!=0){
			a--;
			b--;
			c--;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}