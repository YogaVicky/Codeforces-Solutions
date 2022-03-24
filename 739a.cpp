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
	cin>>n>>m;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
}
int main(){
	vector<ll>ans;
	ll i,count=0;
	for(i=1;i<=100000;i++){
		if(i%3!=0 && i%10!=3){
			ans.push_back(i);
			count++;
			if(count==1000)
				break;
		}
	}
	ll t,k;
	cin>>t;
	while(t--){
		cin>>k;
		cout<<ans[k-1]<<endl;
	}
	return 0;
}
