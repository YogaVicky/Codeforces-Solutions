#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair 
ll calc(ll x){
	return (x*(x+1))/2;
}
void solve(){
	ll n,i,a,b,c,d;
	cin>>a>>b>>c>>d;
	vector<ll>x,y,z;
	for(i=a;i<=b;i++)
		x.pb(i);
	for(i=b;i<=c;i++)
		y.pb(i);
	for(i=c;i<=d;i++)
		z.pb(i);
	ll count = 0,j,k;
	ll l = b;
	for(i=a;i<=b;i++){
		ll ff = d-i+1;
		if(b>=ff)
			count+=(d-c+1)*(c-b+1);
		else if(c>=ff){
			count+=(d-c+1)*(c-ff+1);
			ll val1 = ff - b;
			ll val2 = d-c;
			if(val2>=val1){
				count+=calc(val2)-calc(val2-val1);
			}
			else{
				count+=calc(val2);
			}
		}
		else{
			ll val1 = ff - c;
			ll val2 = (d-c+1)-val1;
			val1 = c-b+1;
			if(val2>=val1){
				count+=calc(val2)-calc(val2-val1);	
			}
			else{
				count+=calc(val2);	
			}
		}
	}
	cout<<count<<endl;
}
int main(){
	ll t=1;
	while(t--){
		solve();
	}
	return 0;
}