#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m,j;
	cin>>n>>m;
	string a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll count = 0;
	for(i=0;i<m;i++)
		if(a[n-1][i]!='R' && a[n-1][i]!='C')
			count++;
	for(i=0;i<n;i++)
		if(a[i][m-1]!='D' && a[i][m-1]!='C')
			count++;
	
	cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}