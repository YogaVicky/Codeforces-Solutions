#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	ll check=0;
	for(i=0;i<n;i++){
		if(s1[i]>s2[i]){
			check=1;
			break;
		}
	}
	if(check==1){
		cout<<-1<<endl;
		return;
	}
	ll count = 0;
	for(i=1;i<n;i++){
		if(s1[i]==s1[i-1] && s2[i]==s2[i-1]){
			for(j=i+1;j<n;j++){
				if(s1[j]==s1[j-1]){
					continue;
				}
				else
					break;
			}
			i=j;
			count++;
		}
	}
	cout<<n-count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}