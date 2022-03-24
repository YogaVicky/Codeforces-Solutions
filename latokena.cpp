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
	char a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	ll check1=0,check2=0;
	char t = 'W';
	char b[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(b[i][j]==t || b[i][j]=='.'){
				b[i][j]=t;
				if(j==m-1)
					t = b[i][0];	
				if(t=='W')
					t='R';
				else
					t='W';
			}
			else{
				// cout<<i<<" "<<j<<endl;
				check1=1;
				break;
			}
		}
	}
	// cout<<check1<<endl;
	if(check1==0){
		cout<<"YES"<<endl;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				cout<<b[i][j];
			cout<<endl;
		}
		return;
	}
	t = 'R';
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(b[i][j]==t || b[i][j]=='.'){
				b[i][j]=t;
				if(j==m-1)
					t = b[i][0];
				if(t=='W')
					t='R';
				else
					t='W';
			}
			else{
				check2=1;
				break;
			}
		}
	}
	// cout<<check2<<endl;
	if(check2==0){
		cout<<"YES"<<endl;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				cout<<b[i][j];
			cout<<endl;
		}
		return;
	}
	if(check1==1 && check2==1)
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
