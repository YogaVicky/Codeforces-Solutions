#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
ll mem[1001];
void calcmem(){
	int i,j;
	memset(mem,0,sizeof(mem));
	mem[0]=INT_MAX;
	mem[1]=0;
	mem[2]=1;
	for(i=3;i<1001;i++){
		for(j=1;j<i;j++){
			
		}
	}
}
void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n>>k;
	vector<ll>a(n,1),b(n),c(n);
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
		cin>>c[i];	
	vector<ll>d(n);
	for(i=0;i<n;i++){
		d[i]=mem[b[i]];
		cout<<d[i]<<" ";
		if(d[i]==0)
			temp+=c[i];
	}
	cout<<endl;
	ll dp[n+1][k+1];
	for(i=0;i<=n;i++){
		for(j=0;j<=k;j++){
			if(i==0 || j==0)
				dp[i][j]=temp;
			else{
				if(d[i-1]<=j){
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-d[i-1]]+c[i-1]);
				}
				else{
					dp[i][j]=dp[i-1][j];
				}
			}
		}
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=k;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	cout<<dp[n][k]<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	calcmem();
	while(t--){
		solve();
	}
	return 0;
}
