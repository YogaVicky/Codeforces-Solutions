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
	string s;
	cin>>n;
	cin>>s;
	char ans[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			ans[i][j]='0';
		}
	}
	for(i=0;i<n;i++){
		if(s[i]=='1'){
			for(j=0;j<n;j++){
				if(i==j)
					ans[i][j]='X';
				else{
					ans[i][j]='=';
					ans[j][i]='=';
				}
			}
		}
	}
	ll count=0;
	for(i=0;i<n;i++){
		if(s[i]=='2'){
			count++;
		}
	}
	if(count>0 && count<=2)
		cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		for(i=0;i<n;i++){
			if(s[i]=='2'){
				ll check=0;
				for(j=0;j<n;j++){
					if(i==j)
						ans[i][j]='X';
					else if(ans[i][j]=='0' &&  check==0){
						ans[i][j]='+';
						ans[j][i]='-';
						check=1;
					}
					else if(ans[i][j]=='0' &&  check==1){
						ans[i][j]='-';
						ans[j][i]='+';
					}
				}		
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cout<<ans[i][j];
			}
			cout<<endl;
		}	
	}
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
