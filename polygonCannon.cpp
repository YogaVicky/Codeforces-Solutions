#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j;
	cin>>n;
	string s[n];
	ll a[n][n];
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[i][j]=='0')
				a[i][j]=0;
			else
				a[i][j]=1;
		}
	}
	ll check = 0;
	for(j=n-1;j>=0;j--){
		for(i=0;i<n;i++){
			if(j==n-1 || i==n-1)
				continue;
			else if(a[i][j]==1 && i!=0){
				if(a[i+1][j]==1 || a[i][j+1]==1)
					continue;
				else{
					// cout<<i<<" "<<j<<endl;
					check = 1;
					break;
				}
			}
			else if(a[i][j]==1){
				if(i==0){
					if(a[i+1][j]==1 || a[i][j+1]==1)
						continue;
					else{
						// cout<<i<<" "<<j<<endl;
						check = 1;
						break;
					}		
				}
			}
		}
	}
	if(check==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10;i++);
	while(t--){
		solve();
	}
	return 0;
}