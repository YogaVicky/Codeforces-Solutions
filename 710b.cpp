#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k;
	cin>>n>>k;
	string s;
	cin>>s;
	ll count=0;
	ll p=0,c=0;
	for(i=0;i<n;i++){
		if(s[i]=='*'){
			s[i]='x';
			count++;
			p=i;
			c=i;
			break;
		}
	}
	for(i=n-1;i>=0;i--){
		if(s[i]=='*'){
			s[i]='x';
			count++;
			break;
		}
	}
	ll l;
	for(l=0;l<n;l++){
		for(i=l;i<n;i++){
			if(s[i]=='x' && i+k<n){
				ll check=0;
				for(j=i+k;j>i;j--){
					if(s[j]=='x'){
						check=1;
						break;
					}
				}
				if(check==0){
					for(j=i+k;j>i;j--){
						if(s[j]=='*'){
							s[j]='x';
							i=j;
							count++;
							break;
						}
					}
				}
			}	
		}
	}
	cout<<count<<endl;
}
int main(){
	ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
					for(i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}