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
	if(m==1){
		cout<<"YES"<<endl;
		for(i=0;i<n;i++){
			cout<<i+1<<endl;
		}
		return;
	}	
	if(m==1 && n==1){
		cout<<"YES"<<endl;
		cout<<1<<endl;
		return;
	}
	if(n%2==1){
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	temp=1;
	for(i=0;i<n/2;i++){
		for(j=0;j<m;j++){
			cout<<temp<<" ";
			temp+=2;
		}
		cout<<endl;
	}
	temp=2;
	for(i=0;i<n/2;i++){
		for(j=0;j<m;j++){
			cout<<temp<<" ";
			temp+=2;
		}
		cout<<endl;
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
