#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		if((b-a)%(c+d)==0)
			cout<<(b-a)/(c+d)<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}