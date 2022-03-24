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
	// cin>>n;
	string s;
	cin>>s;
	n = s.length();
	ll check=0;
	for(i=0;i<n;i++){
		if(s[i]=='U'){
			continue;
		}
		else if(s[i]=='M' && i!=n-1){
			if(s[i+1]=='U'){
				check=1;
				break;
			}
		}
		else{
			ll c1=0,c2=0;
			if(i!=0 && i!=n-1){
				for(j=i;j>=0;j--){
					if(s[j]=='M'){
						c1=1;
						break;
					}
					else if(s[j]=='U'){
						c1=0;
						break;
					}
				}
				for(j=i;j<n;j++){
					if(s[j]=='U'){
						c2=1;
						break;
					}
				}
				if(c1 && c2){
					check=1;
					break;
				}
			}
		}
	}
	if(check)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
