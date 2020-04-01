#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t1;
	cin>>t1;
	while(t1--){
		ll n,m,i,sum=0;
		cin>>n>>m;
		vector<ll>a(n);
		for(i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			sum+=0;
		}
		if(sum>=m){
			sum = sum - a[0];
			a[0] = m;
			for(i=1;i<n;i++){
				if(sum>a[i]){
					sum-=a[i];
					a[i] = 0;
				}
				else{
					a[i]-=sum;
					sum=0;
				}
			}
		}
		else{
			a[0] = sum;
			for(i=1;i<n;i++){
				a[i] = 0;
			}
		}
		cout<<a[0]<<endl;
	}
	return 0;
}