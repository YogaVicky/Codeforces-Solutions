#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m,j,k;
	cin>>n>>m;
	ll a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cin>>a[i][j];
	}
	ll count = 0;
	while(1){
		ll check = 0;
		ll check2,check3;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i][j]==0){
					check2=1;
					check3=1;
					for(k=0;k<n;k++){
						if(a[k][j]==1){
							check2 = 0;
							break;
						} 
					}
					for(k=0;k<m;k++){
						if(a[i][k]==1){
							check3 = 0;
							break;
						} 
					}
					if(check2 ==1 && check3 ==1){
						check=1;
						a[i][j]=1;
						// cout<<i<<j<<endl;
						count++;
						break;
					}
				}
			}
		}
		if(check==0)
			break;
	}
	if(count%2==1)
		cout<<"Ashish"<<endl;
	else
		cout<<"Vivek"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}