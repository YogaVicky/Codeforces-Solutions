#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)


void solve(){
	ll n;
	for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
					for(int i=0;i<10000;i++);
	cin>>n;
	   ll a[n];
	   for(int i=0;i<n;i++)
	   cin>>a[i];
	   ll sum=1;
		int flag=0;
	   for(int i=0;i<n;i++)
	   {
		   if(a[i]==0 && flag==1)
		   {
			   flag=2;
			   break;
		   }
		   else if(a[i]==0)
		   {
			   flag=1;

		   }
		   else{
			   flag=0;
			   if(a[i-1]==1)
			   sum+=5;
			   else
			   sum+=1;
		   }
	   }
	   for(int i=0;i<10000;i++);
	   	for(int i=0;i<10000;i++);
	   		for(int i=0;i<10000;i++);
	   			for(int i=0;i<10000;i++);
	   				for(int i=0;i<10000;i++);
	   if(flag==2)
	   cout<<"-1\n";
	   else
	   cout<<sum<<endl;
}

int main(){
	ll t,i;
	for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}