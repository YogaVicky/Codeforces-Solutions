#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n,i;
	cin>>n;
	vector<ll>a(n),b(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	vector<ll,ll>b;
	b.push_back(a[0],0);
	vector<ll>t;
	t.push_back(a[0]);
	for(i=1;i<n;i++){
		// ll id = lower_bound(b.begin().first(),b.end().first());
		for(auto it = b.begin();it!=b.end();it++){
			if(a[i]-*(it->first)==i-*(it->second)){
				t[]
			}
		}
	}
	return 0;
}