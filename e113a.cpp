#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t,i;
	cin>>t;
	while(t--){
		ll n,i,j,k,m;
	cin>>n;
	if(n<=6)
		cout<<15<<endl;

	else if(n%6==0){
		cout<<(n/6)*15<<endl;
	}
	else if(n%6==1)
		cout<<((n/6)-1)*15 + 20<<endl;
	else if(n%6==2)
		cout<<((n/6)-1)*15 + 20<<endl;
	else if(n%6==5){
		cout<<((n/6)+1)*15<<endl;
	}
	else
		cout<<((n/6)-1)*15 + 25<<endl;
	}
	return 0;
}