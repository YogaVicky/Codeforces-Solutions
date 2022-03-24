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
	// cin>>n;
	string a,b;
	cin>>a>>b;
	n=a.length();
	m=b.length();
	ll c[26]={0},d[26]={0};
	// vector<ll>a(n);
	sort(a.begin(),a.end());
	for(i=0;i<=m-n;i++){
		string d="";
		for(j=i;j<n+i;j++){
			d+=b[j];		
		}
		// cout<<d<<endl;
		sort(d.begin(),d.end());
		if(a==d){
			check=1;
			break;
		}
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

