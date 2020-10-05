#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	ll a,b,x,y;
	cin>>a>>b>>x>>y>>n;
	ll d1 = a-x,d2=b-y;
	ll d3,d4;
	if(n>=d1 && n>=d2){
		if(n>=(d1+d2))
			cout<<x*y<<endl;
		else{
			cout<<min(x*(b-(n-d1)),y*(a-(n-d2)))<<endl;
		}
	}
	else if(x>y){
		if(d1>=n && d2>=n){
			cout<<min((a-n)*b,a*(b-n))<<endl;
		}
		else if(d2>=n){
			cout<<a*(b-n)<<endl;
		}
		else{
			cout<<min(x*(b-(n-d1)),y*(a-(n-d2)))<<endl;
		}
	}
	else{
		if(d1>=n && d2>=n){
			cout<<min((a-n)*b,a*(b-n))<<endl;
		}
		else if(d1>=n){
			cout<<(a-n)*(b)<<endl;
		}
		else{
			cout<<min(x*(b-(n-d1)),y*(a-(n-d2)))<<endl;
		}	
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}