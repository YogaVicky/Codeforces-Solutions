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
	ll a,b,c;
	cin>>a>>b>>c;
	ll d=c-b;
	// if(a==b && a==c){
	// 	cout<<"YES"<<endl;
	// 	return;
	// }
	temp=b-d;
	if(temp%a==0 && temp!=0 && temp/a>0){
		// cout<<a<<endl;
		// cout<<"HERE1"<<endl;
		// cout<<temp<<endl;
		cout<<"YES"<<endl;
		return;
	}
	d=b-a;
	temp=b+d;
	if(temp%c==0 && temp!=0 && temp/c>0){
		// cout<<b<<endl;
		// cout<<"HERE2"<<endl;
		// cout<<temp<<endl;
		cout<<"YES"<<endl;
		return;	
	}
	if((c-a)%2==0){
		d=(c-a)/2;
		temp=c-d;
		if(temp%b==0 && temp!=0 && temp/b>0){
			// cout<<c<<endl;
			// cout<<"HERE3"<<endl;
			// cout<<temp<<endl;
			cout<<"YES"<<endl;
			return;
		}
	}
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