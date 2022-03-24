#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n>>k;
	vector<ll>a; 
	vector<ll>b,c,d;
  	for(i=0;i<n;i++){
  		a.push_back(i);
  	}
  	for(i=0;i<n;i++){
  		b.push_back(i);
  	}
  	for(i=0;i<n;i++){
  		c.push_back(i);
  	}
  	for(i=0;i<n;i++){
  		d.push_back(i);
  	}
  	if(k==0){
	    cout<<0<<" "<<n-1<<endl;
	    a[0]=-1;  
	    a[n-1]=-1;
	}
	else if(k==3 && n==4){
     	cout<<-1<<endl;
     	for(i=0;i<1000000;i++);
   		return;
  	}
  	else if(k==n-1){
		  a[n-1]=-1;
		  a[n-2]=-1;
		  a[n-3]=-1;  
		  a[1]=-1;
		 
		  a[2]=-1;
		  a[0]=-1;
		  cout<<n-3<<" "<<1<<endl;
		  cout<<2<<" "<<0<<endl;
		  cout<<n-1<<" "<<n-2<<endl;
  	}
  	else{
	    
	    a[n-1-k]=-1;
	    a[0]=-1;
	    a[k]=-1;
	    a[n-1]=-1;
	    cout<<k<<" "<<n-1<<endl;
	    cout<<n-1-k<<" "<<0<<endl;
  	}
  	for(j=0;j<n;j++){
		if(a[j]!=-1 && j>=-1000){
		  a[j]=-1;
		  a[n-1-j]=-1;
		  cout<<j<<" "<<n-1-j<<endl;
		}
  	}	
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

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