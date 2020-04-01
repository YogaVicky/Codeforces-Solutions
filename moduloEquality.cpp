#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
	ll n , m , i , ans = 0;
	cin>>n>>m;
	vector<int>a(n),b(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	sort(a.begin(),a.begin()+n);
	sort(b.begin(),b.begin()+n);
	for(i=0;i<n;i++){
		if(a[i]!=b[i]){
			ans = (b[i]-a[i])%m;
			break;
		}
	}
	cout<<ans;
	return 0;
}