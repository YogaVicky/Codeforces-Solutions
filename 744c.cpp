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
	cin>>n>>m>>k;
	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	ll a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			a[i][j]=0;
	}
	ll x,y,z,count=0;
	ll check=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]=='*'){
				check=0;
				count=0;
				x=i-1;y=j-1;z=j+1;
				while(x>=0 && y>=0 && z<=m-1){
					if(s[x][y]==s[x][z] && s[x][y]=='*'){
						count++;
						x--;
						y--;
						z++;
					}
					else
						break;
				}
				if(count>=k){
					a[i][j]=1;
					x=i-1;y=j-1;z=j+1;
					while(x>=0 && y>=0 && z<=m-1){
						if(s[x][y]==s[x][z] && s[x][y]=='*'){
							a[x][y]=1;
							a[x][z]=1;
							x--;
							y--;
							z++;
						}
						else
							break;
					}	
				}
			}
		}
	}
	check=1;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]=='*' && a[i][j]!=1){
				check=0;
				break;
			}
		}
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
