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
	// vector<ll>a(n);
	// for(i=0;i<n;i++)
	// 	cin>>a[i];
	if(n==1)
		cout<<1<<endl;
	else if(n==2)
		cout<<-1<<endl;
	else{
		temp=1;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cout<<temp<<" ";
				temp+=2;
				if(temp>n*n)
					temp=2;
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

