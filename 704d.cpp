#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0;
	cin>>n>>m;
	vector<vector<ll>>a(n,vector<ll>(m));
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cin>>a[i][j];
	}
	if(n==1){
		for(j=0;j<m;j++){
			if(a[0][j]!=j+1){
				check++;
			}
		}
		// cout<<check<<endl;
		if(check>4)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		return;
	}
	vector<ll>c(n,0);
	// vector<ll>d(m,0);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			// cout<<a[i][j]<<" ";
			if(a[i][j]!=j+1){
				check=0;
				// cout<<a[i][j]<<endl;
				for(k=0;k<n;k++){
					if(a[k][j]!=a[i][j]){
						check=1;
						break;
					}
				}
				if(!check){
					for(k=0;k<n;k++){
						temp=a[k][j]; 
						a[k][j]=a[k][temp-1];
						a[k][temp-1]=temp;
					}
					i=0;
					continue;
				}
			}
		}
	}
	// for(i=0;i<m;i++){
	// 	// cout<<d[i]<<" ";
	// 	if(d[i]==1){
	// 		// cout<<a[0][i]<<endl;
	// 		for(j=0;j<n;j++){
	// 			temp=a[j][i]; 
	// 			a[j][i]=a[j][temp-1];
	// 			a[j][temp-1]=temp;
	// 		}
	// 	}
	// }
	// cout<<endl;	

	// for(i=0;i<n;i++){
	// 	for(j=0;j<m;j++){
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	for(i=0;i<n;i++){
		check=0;
		for(j=0;j<m;j++){
			if(a[i][j]!=j+1){
				check++;
			}
			if(check>2){
				cout<<"NO"<<endl;
				return;
			}
		}
	}

	cout<<"YES"<<endl;
}
int main(){
	ll t,i;
	// cin>>t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}