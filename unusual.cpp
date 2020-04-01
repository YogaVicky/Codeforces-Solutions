#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll n,i;
	cin>>n;
	string s;
	cin>>s;
	ll c1=0,c2=0;
	for(i=0;i<n;i++){
		if(s[i]=='(')
			c1++;
		else
			c2++;
	}
	ll count=0;
	if(c1!=c2){
		cout<<-1<<endl;
		return 0;
	}
	ll dp[n]={0};
	if(s[0]==')')
		dp[0] = -1;
	else
		dp[0] = 1;
	for(i=1;i<n;i++){
		if(s[i]==')')
			dp[i] = dp[i-1]-1;
		else
			dp[i] = dp[i-1]+1;	
	}
	for(i=0;i<n;i++){
		// cout<<dp[i]<<" ";
		if(dp[i]<0 || (dp[i]==0 && dp[i-1]<0))
			count++;
	}
	cout<<endl;
	cout<<count<<endl;
	return 0;
}