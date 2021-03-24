#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
ll factorial(ll n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
void solve(){
	ll n,i,m.pos;
	cin>>n>>m>>pos;
	ll o1=m-1,o2=n-m;
	ll mid=n/2,count=0;
	ll mul=1;
	ll ans=0;
	ll l = 0,r=n-1;
	while(pos!=mid){
		count++;
		if(mid>pos){
			if(o2){
				mul*=o2;
				o2--;
				mid=
			}
			else{
				break;
			}
		}
		else{

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