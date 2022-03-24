#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	n=3;
	int a,b,c;
	cin>>a>>b>>c;
	m = max(a,max(b,c));
	if(m==a){
		if(a==b || a==c){
			cout<<1<<" "<<a-b+1<<" "<<a-c+1<<endl;
		}
		else{
			cout<<0<<" "<<a-b+1<<" "<<a-c+1<<endl;
		}
	}
	else if(m==b){
		if(a==b || b==c){
			cout<<b-a+1<<" "<<1<<" "<<b-c+1<<endl;
		}
		else{
			cout<<b-a+1<<" "<<0<<" "<<b-c+1<<endl;
		}
	}
	else{
		if(c==b || a==c){
			cout<<c-a+1<<" "<<c-b+1<<" "<<1<<endl;
		}
		else{
			cout<<c-a+1<<" "<<c-b+1<<" "<<0<<endl;
		}
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
