#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

ll calc(ll temp,ll n){
	ll sum;
	if(temp<=n)
		sum=(temp*(temp+1))/2;
	else{
		ll k=2*n-1;
		sum=(n*(n+1))/2;
		ll s=n-1;
		ll d=k-temp;
		sum+=((s*(s+1))/2-(d*(d+1))/2);
	} 
	return sum;
}

void solve(){
	ll n,i,j,k,m;
	cin>>n>>m;
	ll sum;
	k=2*n-1;
	ll beg=1;
	ll end=k;
	ll temp;
	while(beg<end && beg>0 && end<k+1){
		temp=(beg+end)/2;
		sum=calc(temp,n);
		if(sum==m){
			cout<<temp<<endl;
			return;
		}
		else if(sum<m){
			if(temp+1<=k && calc(temp+1,n)>m){
				cout<<temp+1<<endl;
				return;
			}
			else if(temp+1<=k && calc(temp+1,n)==m){
				cout<<temp+1<<endl;
				return;	
			}
			else{
				beg=temp+1;
			}
		}
		else{
			if(temp-1>0 && calc(temp-1,n)<m){
				cout<<temp<<endl;
				return;
			}
			else if(temp-1>0 && calc(temp-1,n)==m){
				cout<<temp-1<<endl;
				return;	
			}
			else{
				end=temp-1;
			}
		}
	}
	cout<<k<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}