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
	   if(n%2==0)
	   {
		   cout<<0<<endl;
	   }
		else
		{
			int flag=0;
			while(n!=0)
			{
				ll x=n%10;
				if(x%2==0 && n/10==0)
				{
					flag=2;
				}
				else if(x%2==0)
				{
					flag=1;
				}
				n/=10;

			}
			if(flag==0)
			{
				cout<<-1<<endl;
			}
			else if(flag==1)
			{
				cout<<2<<endl;
			}
			else{
				cout<<1<<endl;
			}
			
		}
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);

	while(t--){
		solve();
	}
	return 0;
}