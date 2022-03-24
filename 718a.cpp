#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

ll quick_pow10(ll n)
{
    static ll pow10[13] = {
        1, 10, 100, 1000, 10000, 
        100000, 1000000, 10000000, 100000000, 1000000000,10000000000,100000000000,1000000000000
    };

    return pow10[n]; 
}



void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0,temp=0,ans=0,sum=0;
	cin>>n;
	ans=0;
	ll count;
	while(n>0){
		ans++;
		count=0;
		temp=n;
		while(temp){
			temp/=10;
			count++;
		}
		if(count<4){
			cout<<-1<<endl;
			return;
		}
		// cout<<ans<<endl;
		// cout<<n<<endl;
		temp=2050*pow(10,15);
		while(temp>n){
			temp/=10;
		}
		// cout<<temp<<endl;
		n-=temp;
		// cout<<n<<endl;
		if(n==0){
			cout<<ans<<endl;
			return;
		}
		if(n<0){
			cout<<-1<<endl;
			return;
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