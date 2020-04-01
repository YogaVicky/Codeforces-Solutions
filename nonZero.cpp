#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		vector<ll>a(n);
		ll s=0,p=1,count=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
			p*=a[i];
			if(a[i]==0)
				count++;
		}
		if(p!=0&&s!=0)
			cout<<0<<endl;
		else if(p==0&&s!=0){
			if(count+s!=0)
				cout<<count<<endl;
			else
				cout<<count+1<<endl;
		}
		else if(p!=0 && s==0)
			cout<<1<<endl;
		else
			cout<<count<<endl;
	}
	return 0;	
}