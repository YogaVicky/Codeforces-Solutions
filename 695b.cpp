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
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll count=0;
	ll b[n]={0};
	for(i=1;i<n-1;i++){
		if(a[i]>a[i-1] && a[i]>a[i+1]){
				count++;
				b[i]=1;	
		}
		else if(a[i]<a[i-1] && a[i]<a[i+1]){
				count++;
				b[i]=1;	
		}
	}
	if(count<=1){
		cout<<0<<endl;
		return;
	}
	else if(count==2){
		for(i=1;i<n-1;i++){
			if(b[i]==1 && b[i+1]==1){
				cout<<0<<endl;
				return;
			}
			if(b[i]==1 && b[i+2]==1 && a[i]==a[i+2]){
				cout<<0<<endl;
				return;
			} 
		}
		cout<<1<<endl;	
	}
	for(i=1;i<n-1;i++){
		if(b[i]==1 && b[i+2]==1 && b[i+1]==1){
			count-=3;
			cout<<count<<endl;
			return;
		}
	}
	for(i=1;i<n-1;i++){
		if(b[i]==1 && b[i+2]==1 && a[i]==a[i+2]){
			cout<<count-2<<endl;
			return;
		}
	}
	cout<<count-1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}