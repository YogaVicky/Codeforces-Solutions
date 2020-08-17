#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k,z;
	cin>>n;
    string s;
    cin>>s;
	ll dp[n+1][n+1];
	memset(dp, 0, sizeof(dp));
	for(i=0;i<n;i++){
        dp[i][1]=1;
    }
    ll zero = 0;
    for(i=2;i<=n;i++){
        for(j=i-1;j<n;j++){
            dp[j-i+1][i]=dp[j-i+1][i-1]+1;
            for(z=j;z>=j-i+1;z--){
                if(s[j]==s[z]){
                    dp[j-i+1][i]=min(dp[j-i+1][i],dp[j-i+1][z-j+i]+dp[z+1][max(zero,j-1-z)]);
                }
            }
        }
    }
    // for(i=0;i<n+1;i++){
    // 	for(j=0;j<n+1;j++)
    // 		cout<<dp[i][j]<<" ";
    // 	cout<<endl;
    // }
    cout<<dp[0][n]<<endl;
}
int main(){
    solve();
	return 0;
}

