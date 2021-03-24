#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a,b,c;
	for(i=0;i<n;i++){
		if(i%2==0){
			cin>>k;
			a.pb(k);
		}
		else{
			cin>>k;
			b.pb(k);
		}
		c.pb(k);
	}

	ll ans=c[0]*n + c[1]*n;
	ll x=c[0],y=c[1];
	ll temp[n];
	temp[1]=ans;
	ll c1=n-1,c2=n-1;
	ll s1=c[0],s2=c[1];
	for(i=2;i<c.size();i++){
		if(i%2==0){
			if(c[i]<x){
				x = c[i];
				c1--;
				s1+=c[i];
				temp[i]=s1+x*c1 + s2 + y*c2;
			}
			else{
				c1--;
				s1+=c[i];
				temp[i]=temp[i-1] + c[i];
				temp[i]-=x;	
			}
		}
		else{
			if(c[i]<y){
				y = c[i];
				c2--;
				s2+=c[i];
				temp[i]=s1+x*c1 + s2 + y*c2;
			}
			else{
				c2--;
				s2+=c[i];
				temp[i]=temp[i-1] + c[i];
				temp[i]-=x;	
			}
		}
	}
	for(i=1;i<n;i++){
		// cout<<temp[i]<<" ";
		ans=min(ans,temp[i]);
	}
	cout<<ans<<endl;



	// ll m1=a[0],m2=b[0];
	// ll n1=n,n2=n;
	// ll q=0,w=0;
	// for(i=0;i<a.size();i++){
	// 	if(a[i]<m1){
	// 		m1=a[i];
	// 		q=i;
	// 	}
	// }
	// for(i=0;i<b.size();i++){
	// 	if(b[i]<m2){
	// 		m2=b[i];
	// 		w=i;
	// 	}
	// }
	// ll f;
	// if(q<w){
		

	// }
	// else{

	// }
	// for(i=0;i<a.size();i++){
	// 	if(a[i]==m1){
	// 		ans+=n1*m1;
	// 		break;
	// 	}
	// 	else{
	// 		ans+=a[i];
	// 		n1--;
	// 	}
	// }
	// for(i=0;i<b.size();i++){
	// 	if(b[i]==m2){
	// 		ans+=n2*m2;
	// 		break;
	// 	}
	// 	else{
	// 		ans+=b[i];
	// 		n2--;
	// 	}
	// }
	// cout<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}