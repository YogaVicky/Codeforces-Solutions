#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// void solve(){
// 	ll n,i,j;
// 	cin>>n;
// 	vector<ll>a(n+1),b(n+1);
// 	for(i=1;i<=n;i++)
// 		cin>>a[i];
// 	for(i=1;i<=n;i++)
// 		b[i]=0;
// 	for(i=1;i<=n;i++){
// 		for(j=i+1;j<=n;j++){
// 			if(a[i]+a[j]<=n)
// 				b[a[i]+a[j]]=1;
// 		}	
// 	}
// 	for(i=1;i<=n;i++)
// 		cout<<b[i]<<" ";
// 	cout<<endl;
// 	for(i=1;i<=n;i++){
// 		if(b[a[i]])
// 			b[a[i]]++;
// 	}
// 	ll count = 0;
// 	for(i=1;i<=n;i++){
// 		if(b[i])
// 			count+=b[i]-1;
// 	}
// 	cout<<count<<endl;
// }
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n),b(n+1),d(n+1);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		d[i]=0;	
	b[0]=0;
	for(i=0;i<n;i++){
		b[i+1]=b[i]+a[i];
	}
	ll check = 0,count1=0,j,k;
	ll c;
	sort(a.begin(),a.end());
	for(j=2;j<n+1;j++){
		for(k=0;k<j-1;k++){
			c = b[j]-b[k];
			if(c<=n)
				d[c]=1;
		}
	}
	for(i=0;i<n;i++){
		if(d[a[i]])
			d[a[i]]++;
	}
	for(i=1;i<=n;i++){
		if(d[i])
			count1+=d[i]-1;
	}
	cout<<count1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}