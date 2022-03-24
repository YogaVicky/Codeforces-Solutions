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
	cin>>n>>m;
	ll a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[i][j]=0;			
		}
	}
	for(j=0;j<m;j+=2){
		a[0][j]=1;
	}
	for(i=2;i<n-1;i+=2){
		a[i][0]=1;
		if(m!=2)
			a[i][m-1]=1;
	}
	if(a[n-2][0]!=1)
		a[n-1][0]=1;
	for(j=1;j<m-1;j++){
		if(a[n-2][j]!=1 && a[n-1][j-1]!=1 && a[n-2][j-1]!=1 && a[n-2][j+1]!=1)
			a[n-1][j]=1;
	}
	if(a[n-2][m-1]!=1 && a[n-2][m-2]!=1 && a[n-1][m-2]!=1)
		a[n-1][m-1]=1;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<a[i][j];			
		}
		cout<<endl;
	}
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
