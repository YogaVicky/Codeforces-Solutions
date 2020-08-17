#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,n1,n2,n3;
	cin>>n1,n2,n3;
	vector<ll>a(n1),b(n2),c(n3);
	for(i=0;i<n1;i++)
		cin>>a[i];
	for(i=0;i<n2;i++)
		cin>>b[i];
	for(i=0;i<n3;i++)
		cin>>c[i];
	ll j=0,k=0;
	i=0;
	ll sum = 0;
	sort(a.begin(),a.end(), greater<ll>());
	sort(b.begin(),b.end(), greater<ll>());
	sort(c.begin(),c.end(), greater<ll>());
	while((i!=n1 && j!=n2) || (k!=n3 && j!=n2) || (i!=n1 && k!=n3)){
		ll max1=0,max2=0;
		ll x=0,y=0,z=0;
		if(i!=n1-1)
			x=a[i];
		if(j!=n2-1)
			y=b[j];
		if(k!=n3-1)
			z=c[k];
		if(x>y && x>z){
			max1=x;
			if(y>z){
				i++;
				j++;
				sum+=x*y;
			}
			else{
				i++;
				k++;
				sum+=x*z;	
			}
		}
		else if(y>x && y>z){
			max1=y;
			if(x>z){
				i++;
				j++;
				sum+=x*y;
			}
			else{
				j++;
				k++;
				sum+=y*z;	
			}
		}
		else{
			max1=z;
			if(x>y){
				i++;
				k++;
				sum+=x*z;
			}
			else{
				j++;
				k++;
				sum+=y*z;	
			}
		}
	}
	cout<<sum<<endl;
}
int main(){



	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}