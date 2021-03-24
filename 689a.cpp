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
	for(i=0;i<m;i++){
		cout<<'a';
	}
	ll check=0;
	for(i=m;i<n;i++){
		if(check==1){
			cout<<'a';
			check=0;
		}
		else if(check==0){
			cout<<'b';
			check=3;	
		}
		else{
			cout<<'c';
			check=1;	
		}
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