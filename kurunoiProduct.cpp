#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int 
int main() 
{ 
    ll n,m,i,check=0;
    cin>>n>>m;
    vector<ll>a(n),b(n-1);
    for(i=0;i<n;i++){
    	cin>>a[i]; 
    	if(a[i]==0)
    		check++;
    }
    if(check>1){
    	cout<<0;
    	return 0;
    }
    sort(a.begin(),a.end());
    for(i=1;i<n;i++){
    	if(a[i]==a[i-1]){
    		cout<<0;
    		return 0;
		}
    }
    ll sum = 0; 
    for(i=1;i<n;i++){
    	b[i-1] = (a[i] - a[i-1])%m;
    }
    for(i=0;i<n-1;i++)
    	sum+=b[i];
    ll p = sum;
    p%=m;
    // cout<<p<<endl;
    for(i=0;i<n-1;i++){
    	if(sum-b[i]!=0)
    	p*=(sum-b[i]);
    	p%=m;
    }
    // cout<<p<<endl;
    cout <<p%m; 
    return 0; 
} 
