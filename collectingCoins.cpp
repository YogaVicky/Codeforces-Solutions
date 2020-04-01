#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c,n;
		cin>>a>>b>>c>>n;
		ll m = max(a,b);
		m = max(m,c);
		n-=3*m-(a+b+c);
		if(n>=0&&n%3==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
} 