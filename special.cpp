#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n),b(n+1);
	for(i=0;i<n;i++)
		cin>>a[i];
	
}
// void solve(){
// 	ll n,i;
// 	cin>>n;
// 	vector<ll>a(n),b(n+1);
// 	for(i=0;i<n;i++)
// 		cin>>a[i];
// 	b[0]=0;
// 	for(i=0;i<n;i++){
// 		b[i+1]=b[i]+a[i];
// 	}
// 	ll check = 0,count1=0,j,k;
// 	ll c;
// 	sort(a.begin(),a.end());
// 	map<ll,ll>m;
// 	for(j=2;j<n+1;j++){
// 		for(k=0;k<j-1;k++){
// 			c = b[j]-b[k];
// 			if(binary_search(a.begin(),a.end(),c) && m.find(c)==m.end()){
// 				// check = 1;
// 				ll g = count(a.begin(),a.end(),c); 
// 				m[c]=1;
// 				// cout<<c<<" ";
// 				count1+=g;
// 			}
// 		}
// 	}
// 	// sort(c.begin(),c.end());
// 	// for(i=0;i<n;i++){
// 	// 	if(binary_search(c.begin(),c.end(),a[i]))
// 	// 		count++;
// 	// }
// 	cout<<count1<<endl;
// }
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}