#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c,x,y,z;
		cin>>a>>b>>c;
		x = a;
		if(x>b)
			x = b;
		if(x>c)
			x = c;

		// cout<<x<<y<<endl;
		if(a + b + c +1 >= 2*x)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}