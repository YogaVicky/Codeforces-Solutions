#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n>>m;
	string a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll count=0;
	ll b[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]=='.')
				b[i][j]=0;
			else{
				b[i][j]=1;
				count++;
			}
		}
	}
	// for(i=0;i<n;i++){
	// 	for(j=0;j<m;j++){
	// 		cout<<b[i][j]<<" ";			
	// 	}
	// 	cout<<endl;
	// }
	ll h;
	for(h=1;h<=n;h++){
		for(i=1;i<n;i++){
			for(j=1;j<m-1;j++){
				if(b[i][j]==h){
					if(b[i][j-1]>=h && b[i][j+1]>=h && b[i-1][j]>=h){
						b[i][j]++;
						count++;
					}
				}
			}
		}	
	}
	// for(i=0;i<n;i++){
	// 	for(j=0;j<m;j++){
	// 		cout<<b[i][j]<<" ";			
	// 	}
	// 	cout<<endl;
	// }
	cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	ll i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
	while(t--){
		solve();
	}
	return 0;
}