#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0;
	cin>>n;
	ll cost=INT_MAX;
	ll c;
	vector<ll>a(n);
	ll l=-1,r=-1;
	ll lc,rc;
	for(i=0;i<n;i++){
		cin>>x>>y>>c;
		if(l==-1 && r==-1){
			l=x;
			r=y;
			cost=c;
			rc=c;
			lc=c;
			a[i]=cost;
			cout<<cost<<endl;
			cost*=2;
			// cout<<cost<<endl;
		}
		else{
			if(y>r){
				if(x<=l){
					cost=c;
					l=x;
					r=y;
					lc=rc=c;
				}
				else{
					cost-=rc;
					cost+=c;
					rc=c;
					r=y;
				}
			}
			else if(x<l){
				if(y>=r){
					cost=c;
					l=x;
					r=y;
					lc=rc=c;
				}
				else{
					cost-=lc;
					cost+=c;
					lc=c;
					l=x;
				}
			}
			else if(x==l && y==r && c<cost){
				cost=c;
			}
			else if(x==l && c<lc && lc!=rc){
				cost-=lc;
				cost+=c;
				lc=c;
			}
			else if(y==r && c<rc && lc!=rc){
				cost-=rc;
				cost+=c;
				rc=c;
			}
			cout<<cost<<endl;
			a[i]=cost;
		}
	}
	// for(i=0;i<n;i++){
	// 	cout<<a[i]<<endl;
	// }
	
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}