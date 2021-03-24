#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	ll a[3]={0};
	for(i=0;i<3;i++){
		string s;
		cin>>s;
		if(s[1]=='>')
			a[s[0]-'A']++;
		else
			a[s[2]-'A']++;
	}
	
	if(a[0]==a[1] || a[1]==a[2] || a[0]==a[2])
		cout<<"Impossible";
	else{
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(a[j]==i)
					cout<<char('A'+j);
			}
		}
	}
	cout<<endl;
	// cin>>n;
	// vector<ll>a(n);
	// for(i=0;i<n;i++){
	// 	cin>>a[i];
	// }
}
int main(){
	ll t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
}