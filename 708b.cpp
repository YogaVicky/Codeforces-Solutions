#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve1(){
	ll n,i,j,k,m;
	cin>>n>>m;
	vector<ll>a(n);
	vector<ll>b(m);
	for(i=0;i<m;i++){
		b[i]=0;
	}
	for(i=0;i<n;i++){
		cin>>a[i];
		a[i]=a[i]%m;
		b[a[i]]++;
	}
	// for(i=1;i<m;i++){
	// 	cout<<b[i]<<" ";
	// }
	// cout<<endl;
	ll ans = 0;
	if(b[0]>0)
		ans=1;
	// cout<<ans<<endl;
	for(i=1;i<m;i++){
		if(b[i]<b[m-i] && b[i]!=0 && b[m-i]!=0){
			ans++;
			b[m-i]-=(b[i]+1);
			b[i]=0;
		}
		else if(b[i]>b[m-i] && b[i]!=0 && b[m-i]!=0){
			ans++;
			b[i]-=(b[m-i]+1); 
			b[m-i]=0;	
		}
		else if(b[i]!=0 && b[m-i]!=0){
			ans++;
			b[i]=0;
			b[m-i]=0;		
		}
		// cout<<ans<<endl;
	}
	for(i=1;i<m;i++){
		ans+=b[i];
	}
	cout<<ans<<endl;

}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve1();
	}
	return 0;
}