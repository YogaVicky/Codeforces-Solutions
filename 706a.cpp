#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n>>k;
	string s;
	cin>>s;
	ll count=0;
	if(k==0){
		cout<<"YES"<<endl;
	}
	else{
		j=n-1;
		for(i=0;i<n;i++){
			if(i<j){
				if(s[i]==s[j]){
					count++;
					j--;
				}
				else
					break;
			}
			else{
				break;
			}
		}
		if(count>k){
			cout<<"YES"<<endl;
		}
		else if(count==k){
			if(i<=j){
				cout<<"YES"<<endl;		
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}	
	}
	// cout<<count<<" "<<i<<" "<<j<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}