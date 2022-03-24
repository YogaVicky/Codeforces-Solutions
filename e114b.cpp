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
	ll a,b,c;
	cin>>a>>b>>c>>n;
	ll check=1;
	ll a1=0,b1=0,c1=0;
	ll temp;
	if(a>b && a>c){
		if(b<c){
			temp=b;
			b=c;
			c=temp;
		}
	}
	else if(b>a && b>c){
		temp=a;
		a=b;
		b=temp;
		if(b<c){
			temp=b;
			b=c;
			c=temp;
		}	
	}
	else{
		temp=a;
		a=c;
		c=temp;
		if(b<c){
			temp=b;
			b=c;
			c=temp;
		}	
	}
	if(a/2>0){
		if(a/2>=n){
			a=a-n;
			n=0;
		}
		else{
			n=n-a/2;
			if(a%2)
				a/=2;
			else
				a= a/2 + 1;
		}
	}
	if(b/2>0){
		if(b/2>=n){
			b=b-n;
			n=0;
		}
		else{
			n=n-b/2;
			if(b%2)
				b/=2;
			else
				b= b/2 + 1;
		}
	}
	if(c/2>0){
		if(c/2>=n){
			c=c-n;
			n=0;
		}
		else{
			n=n-c/2;
			if(c%2)
				c/=2;
			else
				c= c/2 + 1;
		}
	}	
	if(a>b && a>c){
		if(a-1<=b+c)
			check=1;
		else
			check=0;
	}
	else if(b>a && b>c){
		if(b-1<=a+c)
			check=1;
		else
			check=0;
	}
	else{
		if(c-1<=a+b)
			check=1;
		else
			check=0;
	}
	if(n!=0)
		check=0;
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
