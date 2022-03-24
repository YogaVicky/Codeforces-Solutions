#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0;
	cin>>x>>y;
	vector<vector<char>>a(x,vector<char>(x,'.'));
	if(x%2!=0){
		if(y>x/2+1)
			cout<<-1<<endl;
		else{
			// cout<<"IN"<<endl;
			check=0;
			ll p=0;
			i=0;
			while(y--){
				a[i][i]='R';
				i+=2;;
			}
			for(i=0;i<x;i++){
				for(j=0;j<x;j++){
					cout<<a[i][j];
				}
				cout<<endl;
			}		
		}
	}
	else{
		if(y>x/2)
			cout<<-1<<endl;
		else{
			check=0;
			ll p=0;
			i=0;
			while(y--){
				a[i][i]='R';
				i+=2;
			}
			for(i=0;i<x;i++){
				for(j=0;j<x;j++){
					cout<<a[i][j];
				}
				cout<<endl;
			}	
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