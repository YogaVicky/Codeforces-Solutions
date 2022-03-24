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
	ll c,b;
	cin>>b>>c;
	char a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]=='B')
				check=1;
		}
		// cout<<endl;
	}
	if(!check){
		cout<<-1<<endl;
	}
	else if(a[b-1][c-1]=='B')
		cout<<0<<endl;
	else{
		check=0;
		for(i=0;i<n;i++){
			if(a[i][c-1]=='B')
				check=1;
		}
		for(j=0;j<m;j++){
			if(a[b-1][j]=='B')
				check=1;
		}
		if(check)
			cout<<1<<endl;
		else
			cout<<2<<endl;
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