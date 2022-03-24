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
	cin>>n>>m;
	string s;
	cin>>s;
	// vector<ll>a(n);
	ll a[26]={0};
	for(i=0;i<n;i++){
		a[s[i]-'a']++;
	}
	ll count1=0,count2=0;
	for(i=0;i<26;i++){
		count1+=a[i]/2;
		count2+=a[i]%2;
	}
	ans=count1/m;
	ans*=2;
	count2+=((count1%m)*2);
	// cout<<count1<<endl;
	// cout<<count2<<endl;
	if(count2>=m)
		cout<<ans+1<<endl;
	else
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