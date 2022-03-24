#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

ll nextPerfectSquare(ll N)
{
    ll nextN = floor(sqrt(N)) + 1;
 
    return nextN * nextN;
}
ll prevPerfectSquare(ll N)
{
    ll prevN = ceil(sqrt(N)) - 1;
 
    return prevN * prevN;
}
void solve(){
	ll n,i,j,k,m;
	cin>>n;
	if(floor(double(sqrt(n)))==ceil(double(sqrt(n)))){
		cout<<sqrt(n)<<" "<<1<<endl;
	}
	else{
		j=nextPerfectSquare(n);
		i=prevPerfectSquare(n);
		ll i1,j1;
		i1=sqrt(i);
		j1=sqrt(j);
		// cout<<i1<<" "<<j1<<end
		k=(i+j)/2+1;
		// cout<<k<<endl;
		if(n>k){
			m=j-n+1;
			cout<<j1<<" "<<m<<endl;
		}
		else if(n<k){
			m=j1-(k-n);
			cout<<m<<" "<<j1<<endl;	
		}
		else{
			cout<<j1<<" "<<j1<<endl;
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
