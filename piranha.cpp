#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	ll max =0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(max<a[i])
			max = a[i];
	}
	ll check = 0;
	for(i=0;i<n;i++){
		if(a[i]==max){
			if(i==0){
				if(a[i]>a[i+1]){
					cout<<i+1<<endl;
					check=1;
					break;
				}
			}
			else if(i==n-1){
				if(a[i]>a[i-1]){
					cout<<i+1<<endl;
					check=1;
					break;
				}
			}
			else{
				if(a[i]>a[i-1] || a[i]>a[i+1]){
					cout<<i+1<<endl;
					check=1;
					break;
				}	
			}
		}
	}
	if(check==0)
		cout<<-1<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}