#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
    ll n,i,j,k,m;
    cin>>n;
    ll sum=0;
    vector<ll>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n==0)
        cout<<0<<endl;
    else
        cout<<1<<endl;
}
int main(){
    ll t,i;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}