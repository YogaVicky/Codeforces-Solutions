#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve2(){
	ll n,i,j,k,l;
	cin>>n>>k>>l;
	vector<ll>d(n),p(2*k);
	for(i=0;i<n;i++){
		cin>>d[i];
	}
	ll cnt=0;	
	for(i=0;i<2*k;i++){
	 	if(i<=k) 
	 		p[i] = cnt++;
 		else p[i] = 2*k-(i);
	}
	for(i=0;i<2*k;i++)
		cout<<p[i]<<" ";
	cout<<endl;
	ll h;
	ll check=0,count=0;
	for(h=0;h<2*k;h++){
		ll g = h;
		// for(i=0;i<2*k;i++){
		// 	cout<<p[g%]
		// }
		for(i=0;i<n;i++){
			if(d[i]+p[g%(2*k)]>l){
				ll check1=0;
				g++;
				for(j=1;j<2*k;j++){
					if(d[i]+p[g%(2*k)]<=l){
						check1=1;
						break;
					}
					g++;
				}
				// cout<<i<<" "<<g%(2*k)<<endl;
				if(check1==0){
					count++;
					break;
				}
			}
			g++;
		}
	}
	if(count==2*k)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve2();
	}
	return 0;
}