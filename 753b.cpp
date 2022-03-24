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
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
	if(n%2==0){
		if(m%4==0)
			cout<<n<<endl;
		else if(m%4==1)
			cout<<n-1-(m/4)*4<<endl;
		else if(m%4==2)
			cout<<n+1<<endl;
		else
			cout<<n+(m/4+1)*4<<endl;
	}
	else{
		if(m%4==0)
			cout<<n<<endl;
		else if(m%4==1)
			cout<<n+1+(m/4)*4<<endl;
		else if(m%4==2)
			cout<<n-1<<endl;
		else
			cout<<n-(m/4+1)*4<<endl;	
	}
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);for(i=0;i<100000;i++);
						for(i=0;i<100000;i++);
	while(t--){
		solve();
	}
	return 0;
}
