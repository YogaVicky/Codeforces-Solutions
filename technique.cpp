#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,m;
	cin>>n>>m;
	ll a[n][m],b[m][n];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cin>>a[i][j];
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			cin>>b[i][j];
	}
	ll k;
	ll g = a[0][0],h;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(b[i][j]==g){
				h=i;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j][0] == b[h][i]){
				for(k=0;k<m;k++)
					cout<<a[j][k]<<" ";
			}
		}
		cout<<endl;
	}
}
int main(){
	ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
					
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}