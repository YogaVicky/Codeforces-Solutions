#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
class gfg 
{ 
 public : ll gcd(ll a, ll b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
  
   
// Function to return LCM of two numbers  
  ll lcm(ll a, ll b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
} g; 
void solve(){
	ll n,i,a,b,q,l,r;
	cin>>a>>b>>q;
	while(q--){
		cin>>l>>r;
		ll res = a*b;
		ll count = 0;
		ll ans = res;
		for(i=1;i<ans;i++){
			if(i>=l && i<=r && (i%a)%b == (i%b)%a)
				count++;
		}
		if(res<=r){
			while(res<=l){
				if(l-res<max(a,b))
					count+=max(a,b)-(l-res);
				res=res+ans;
			}
			while(res<=r && res>=l){
				if(res+max(a,b)-1<=r)
					count+=max(a,b);
				else
					count+=r-res+1;
				res=res+ans;
			}
		}
		cout<<r-l+1-count<<" ";
	}
	cout<<endl;	
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}