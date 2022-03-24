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
	// vector<ll>a(n);
	char c='B';
	if((n*m)%2==0){
		for(i=0;i<n;i++){
			if(i%2==0)
				c='B';
			else
				c='W';
			for(j=0;j<m;j++){
				if(i==n-1 && j==m-2){
					cout<<"BB"<<endl;
					return;
				}
				else
					cout<<c;
				if(c=='B')
					c='W';
				else
					c='B';
			}
			cout<<endl;
		}
	}
	else{
		for(i=0;i<n;i++){
			if(i%2==0)
				c='B';
			else
				c='W';
			for(j=0;j<m;j++){
				cout<<c;
				if(c=='B')
					c='W';
				else
					c='B';
			}
			cout<<endl;
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

