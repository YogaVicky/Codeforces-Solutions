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
	cin>>n;
	ll l=1;
	for(i=0;i<n;i++){
		string s="";
		for(j=0;j<n;j++){
			if(s.length()>2*n - 2*l){
				ll h = (2*n - s.length())/2;
				for(k=0;k<h;k++){
					s+='(';
				}	
				for(k=0;k<h;k++){
					s+=')';
				}
				break;	
			}
			for(k=0;k<l;k++){
				s+='(';
			}
			for(k=0;k<l;k++){
				s+=')';
			}
				
		}
		l++;
		cout<<s<<endl;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
