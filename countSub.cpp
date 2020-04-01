#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll m,n,c,i,j,k;
	cin>>n>>m>>k;
	vector<ll>a(n);
	vector<ll>b(m);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<m;i++){
		cin>>b[i];
	}
	ll mul[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			mul[i][j] = a[i]*b[j];
		}
	}
	ll dp[n][m] = {0};
	ll count = 0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==0){
				if(j==0){
					if(mul[i][j]==1){
						dp[i][j]=1;
						if(dp[i][j]>=k){
							dp[i][j]=k;
							count++;
						}
					}
					else
						dp[i][j]=0;		
				}
				else{
					if(mul[i][j]==1){
						dp[i][j]=dp[i][j-1]+1;
						if(dp[i][j]>=k){
							dp[i][j]=k;
							count++;
						}
					}
					else
						dp[i][j]=0;		
				}
			}
			else if(j==0){
				if(mul[i][j]==1){
					dp[i][j]=dp[i-1][j]+1;
					if(dp[i][j]>=k){
							dp[i][j]=k;
							count++;
						}
				}
				else
					dp[i][j]=0;
			}
			else{
				if(mul[i][j]==1){
					dp[i][j]=dp[i-1][j]+dp[i][j-1]+dp[i-1][j-1]+1;
					if(dp[i][j]>=k){
							dp[i][j]=k;
							count++;
						}
					if(dp[i-1][j]>=k && dp[i][j-1]>=k && dp[i-1][j-1]>=k)
						count++;
				}
				else
					dp[i][j]=0;	
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cout<<mul[i][j]<<" ";
		cout<<endl;
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	cout<<count<<endl;
	return 0;
}