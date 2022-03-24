#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	vector<vector<ll>>b(n,vector<ll>(30,0));
	for(i=0;i<n;i++){
		temp=a[i];
		j=30;
		while(temp){
			j--;
			b[i][j]=temp%2;
			temp/=2;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<30;j++)
			cout<<b[i][j];
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