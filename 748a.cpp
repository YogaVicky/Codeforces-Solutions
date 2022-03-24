#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
	ll n,i,j,k,m;
	cin>>n;
	ll ans=INT_MAX;
	m=n;
	ll count=2,temp=0,check=0;
	while(m!=0){
		k=m%10;
		if(k==0){
			check=1;
			count--;
		}
		else if(k==5 && check==1){
			count--;
		}
		else
			temp++;
		if(count==0)
			break;
		m/=10;
	}
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
	ans=min(temp,ans);
	count=2;temp=0;check=0;
	m=n;
	while(m!=0){
		k=m%10;
		if(k==5 && check==0){
			check=1;
			count--;
		}
		else if((k==2 || k==7) && check==1){
			count--;
		}
		else
			temp++;
		if(count==0)
			break;
		m/=10;
	}
	ans=min(ans,temp);
	cout<<ans<<endl;
	
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
					for(i=0;i<10000;i++);

	while(t--){
		solve();
	}
	return 0;
}
