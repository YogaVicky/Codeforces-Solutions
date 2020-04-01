#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll check = 0,i;
		ll n;
		cin>>n;
		vector<ll>a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++){
			if(a[i]%2==0){
				cout<<1<<endl;
				cout<<i+1<<endl;
				check = 1;
				break;
			}
		}
		if(check!=1 && n!=1){
			check = 1;
			cout<<2<<endl;
			ll count = 0;
			for(i=0;i<n;i++){
				if(a[i]%2==1){
					count++;
					cout<<i+1<<" ";
				}
				if(count==2){
					cout<<endl;
					break;
				}
			}
		}
		if(check==0)
			cout<<-1<<endl;
	}
	return 0;
}