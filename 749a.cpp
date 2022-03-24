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
	ll check=1;
	for (i = 2; i <= sqrt(sum); i++) {
        // If n is divisible by any number between
        // 2 and n/2, it is not prime
        if (sum % i == 0) {
            check=0;
            break;
        }
    }
    for(i=0;i<100000;i++);
    	for(i=0;i<100000;i++);
    		for(i=0;i<100000;i++);for(i=0;i<100000;i++);
    			
    ll check1=1;
    if(check){
    	cout<<n-1<<endl;
    	for(i=0;i<n;i++){
    		if(a[i]%2==1 && check1){
    			check1=0;
    			continue;
    		}
			cout<<i+1<<" ";
		}	
		cout<<endl;
    }
    else{
    	cout<<n<<endl;
    	for(i=0;i<n;i++){
			cout<<i+1<<" ";
		}	
		cout<<endl;
    }
}
int main(){
	ll t,i;
	for(i=0;i<100000;i++);
		for(i=0;i<100000;i++);
			for(i=0;i<100000;i++);
				for(i=0;i<100000;i++);
					for(i=0;i<100000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
