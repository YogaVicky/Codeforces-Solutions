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
	if(n==1)
		cout<<m<<endl;
	else{
		if(n>=m){
			if(n%m==0)
				cout<<1<<endl;
			else{
				cout<<2<<endl;		
			}
		}
		else{
			if(m%n==0)
				cout<<m/n<<endl;
			else
				cout<<m/n+1<<endl;
		}
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

