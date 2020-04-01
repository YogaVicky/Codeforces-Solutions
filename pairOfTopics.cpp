#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll n,i;
	cin>>n;
	vector<ll>a(n),b(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	vector<ll>c(n);
	for(i=0;i<n;i++){
		c[i]=a[i]-b[i];
	}
	sort(c.begin(),c.end());
	// cout<<endl;
	ll j = n-1,p=0;
	i = 0;
	while(i<j){
		if(c[i]+c[j]>0){
			p+=j-i;
			j--;
		}
		else
			i++;
	}
	cout<<p;
	return 0;
}