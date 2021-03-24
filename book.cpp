#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	ll count =0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1)
			count++;	
	}
	ll g = 0,c=0,count1=0;
	for(i=0;i<n;i++){
		if(a[i]==1){
			if(c==0)
				c=1;
			count1++;
		}
		if(count==count1)
			break;
		else if(c==1 && a[i]==0)
			g++;
	}
	if(count>1)
		cout<<g<<endl;
	else
		cout<<0<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10000;i++);
	while(t--){
		solve();
	}
	return 0;
}