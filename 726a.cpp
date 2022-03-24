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
	vector<ll>a(n);
	ll sum=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	float av = float(sum)/float(n);
	// c
	if(av>1){
		cout<<sum-n<<endl;
	}
	else if(av==1){
		cout<<0<<endl;
	}
	else{
		cout<<1<<endl;
	}
}
int main(){
	ll t,i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
