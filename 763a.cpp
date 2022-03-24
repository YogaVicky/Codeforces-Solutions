#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x;
	ll check=0,check1=0;
	ll a,b,c,d;
	cin>>n>>m>>a>>b>>c>>d;
	ll count=0,dc=1,dr=1;
    while(true){
        if(a==c || b==d)
            break;
        if(a==n)
            dr=-1;
        if(b==m)
            dc=-1;
        a+=dr;
        b+=dc;
        count++;
    }
	cout<<count<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}