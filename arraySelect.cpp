#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,b,x;
	cin>>n>>x;
	vector<ll>a(n);
	ll check = 1;
	for(i=0;i<n;i++){
		cin>>b;
		a[i]=b%2;
	}
	ll c1=0,c2=0;
	for(i=0;i<n;i++){
		if(a[i]==0)
			c1++;
		else
			c2++;
	}
	// cout<<c1<<" "<<c2<<endl;
	if(x==n){
		if(c2%2==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else{
		if(c2>=1){
			if(x%2==0 && c1==0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		// x = x - c1;
		// if(x<1)
		// 	x = 1;
		// if(c2>=1 && x%2!=0 && c2>=x)
		// 	cout<<"YES"<<endl;
		// else if(c2>=1 && x%2==0 && c2>x)
		// 	cout<<"YES"<<endl;
		// else
		// 	cout<<"NO"<<endl;		
	}
	// x = x - c1;
	// if(x<1)
	// 	x = 1;
	// if(x==1 && c2>=1)
	// 	cout<<"Yes"<<endl;
	// else if(c2>x && x%2==0)
	// 	cout<<"Yes"<<endl;
	// else
	// 	cout<<"No"<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<10;i++);
	while(t--){
		solve();
	}
	return 0;
}