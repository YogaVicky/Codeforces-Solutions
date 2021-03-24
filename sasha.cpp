#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
bool isPrime(int n) 
{ 
    // Corner case 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
void solve(){
	ll n,i,j;
	cin>>n;
	ll sum = (n-1)*4;
	ll a;
	for(i=1;i<100000;i++){
		if(isPrime(i+sum) && !isPrime(i)){
			a=i;
			break;
		}
	}
	ll b;
	sum = (n-1)*a;
	for(i=1;i<100000;i++){
		if(isPrime(i+sum) && !isPrime(i)){
			b=i;
			break;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==n-1 && j==n-1)
				cout<<b<<" ";
			else if(i==n-1 || j==n-1)
				cout<<a<<" ";
			else cout<<4<<" ";
		}
		cout<<endl;
	}
}
int main(){
	ll t,i;
	for(i=0;i<1000;i++);
	for(i=0;i<1000;i++);
	for(i=0;i<1000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}