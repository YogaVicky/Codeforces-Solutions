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
	ll check1=0;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	ll k1=-1,k2=-1;
	ll l1=-1,l2=-1;
	for(i=0;i<n;i++){
		ll check=0;
		for(j=0;j<n;j++){
			if(s[i][j]=='*'){
				check++;
				if(k1==-1){
					k1=j;
					l1=i;
				}
				else{
					k2=j;
					l2=i;
				}
			}
		}
		
		if(check==2){
			if(i==0){
				s[i+1][k1]='*';
				s[i+1][k2]='*';
			}
			else{
				s[i-1][k1]='*';
				s[i-1][k2]='*';	
			}
			check1=1;
		}
	}
	if(check1==0){
		if(k1==k2){
			if(k1==0){
				s[l1][k2+1]='*';
				s[l2][k1+1]='*';
			}
			else{
				s[l1][k2-1]='*';
				s[l2][k1-1]='*';
			}
		}
		else{
			s[l1][k2]='*';
			s[l2][k1]='*';
		}
	}
	for(i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}