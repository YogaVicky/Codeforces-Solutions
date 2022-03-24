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
	cin>>n;
	ll a[n][5];
	for(i=0;i<n;i++){
		for(j=0;j<5;j++){
			cin>>a[i][j];	
		}
	}
	ll check=0;
	ll x=0,y=0,z=0;
	ll check1;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			x=0;
			y=0;
			z=0;
			check1=1;
			for(k=0;k<n;k++){
				if(a[k][i]==0 && a[k][j]==0){
					check1=0;
					break;
				}
				else if(a[k][i]==1 && a[k][j]==1)
					z++;
				else if(a[k][i]==1)
					x++;
				else if(a[k][j]==1)
					y++;
		
			}
			if(check1){
				if(x!=y){
					if(abs(x-y)<=z)
						check=1;
				}
				else
					check=1;
			}
			if(check)
				break;
		}
	}
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
