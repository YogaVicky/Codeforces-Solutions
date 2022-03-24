#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll c=0;
    ll o=0;
    for(i=0;i<n;i++){
        if(i!=0 && i!=n-1 && a[i]==1)
        	c++;
        if(i!=0 && i!=n-1 && a[i]%2==1)
        	o++;
        if(i!=0 && i!=n-1)
        	ans+=(a[i]+1)/2;
        check+=ans;
    }
    sort(a.begin(),a.end());
    sort(a.begin(),a.end());
    if(c==n-2 || (o==n-2 && o==1)){
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;	
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}