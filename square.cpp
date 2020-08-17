#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m,x,y,j;
	cin>>n>>m>>x>>y;
	string s[n];
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	ll res = 0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]=='.' && s[i][j+1]=='.' && j!=m-1){
				if(y<=2*x)
					res+=y;
				else
					res+=2*x;
				j++;
			}
			else if(s[i][j]=='.')
				res+=x;
		}
	}
	cout<<res<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}