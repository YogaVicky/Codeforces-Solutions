#include<bits/stdc++.h>
using namespace std;
#define ll long long int



int main(){
	ll t,n,k;
	cin>>t;
while(t--)
{
	cin>>n>>k;
	vector<int>a(n);
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		a[i]=x;
	}
    ll mini=INT_MIN;
    if(n<=10000){
    	for(ll i=0;i<n;i++){
	    	for(ll j=i+1;j<n;j++){
	    		ll t = ( (i+1)*(j+1) )- k*(a[i]|a[j]);
			//cout<<t<<endl;
				if(mini<t)
				mini=t;
	    	}
	    }	
    }
    else{
    	for(ll i=0;i<n-1;i++)
		{
			ll t = ( (i+1)*(i+2) )- k*(a[i] | a[i+1]);
			//cout<<t<<endl;
			if(mini<t)
			mini=t;
			
		}	
    }
	cout<<mini<<endl;
}
	return 0;
}