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
	string s;
	cin>>n;
	cin>>s;
	// vector<ll>a(n);
	ll o=0,c=0;
	for(i=0;i<n;i++){
		if(s[i]=='(')
			o++;
		else if(s[i]==')'){
			if(o>0)
				o--;
			else
				c++;
		}
	}
	cout<<c<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

