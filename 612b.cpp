#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

void solve(){
	ll n,i,j,k;
	cin>>n>>k;
	for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
					for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
					for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
	vector<ll>a,b;
	ll check=LONG_LONG_MAX;
	ll c=0;
	for(i=0;i<n;i++){
		cin>>c;
		if(c<0){
			b.pb(c*(-1));
		}
		else{
			a.pb(c);
		}
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	ll l1=a.size();
	ll l2=b.size();
	if(l1==0){
		a.pb(0);
		l1++;
	}
	if(l2==0){
		b.pb(0);
		l2++;
	}
	for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);

					for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
	ll ans=0;
		for(i=0;i<l1;i++){
			for(j=0;j<k;j++){
				i++;
				if(i==l1)
					break;
			}
			i--;
			ans+=a[i]*2;
		}
		for(i=0;i<l2;i++){
			for(j=0;j<k;j++){
				i++;
				if(i==l2)
					break;
			}
			i--;
			if(i==l2-1){
				ans+=b[i];
			}
			else{
				ans+=b[i]*2;
			}
		}
	for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
					for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
	check=min(ans,check);
	// cout<<ans<<endl;
for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
	ans=0;
		for(i=0;i<l2;i++){
			for(j=0;j<k;j++){
				i++;
				if(i==l2)
					break;
			}
			i--;
			ans+=b[i]*2;
		}
		for(i=0;i<l1;i++){
			for(j=0;j<k;j++){
				i++;
				if(i==l1)
					break;
			}
			i--;
			if(i==l1-1){
				ans+=a[i];
			}
			else{
				ans+=a[i]*2;
			}
		}
		for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
	check=min(ans,check);
	// cout<<ans<<endl;
	ans=0;
	ll temp;
	for(i=l2-1;i>=0;i--){
		temp=i;
		for(j=0;j<k;j++){
			i--;
			if(i<0)
				break;
		}
		i++;
		ans+=b[temp]*2;
	}
	for(i=l1-1;i>=0;i--){
		temp=i;
		for(j=0;j<k;j++){
			i--;
			if(i<0)
				break;
		}
		i++;
		if(temp==l1-1){
			ans+=a[temp];
		}
		else{
			ans+=a[temp]*2;
		}
	}
	// cout<<ans<<endl;
	check=min(ans,check);
	ans=0;
	for(i=l1-1;i>=0;i--){
		temp=i;
			for(j=0;j<k;j++){
				i--;
				if(i<0)
					break;
			}
			i++;
			ans+=a[temp]*2;
		}
		for(i=l2-1;i>=0;i--){
			temp=i;
			for(j=0;j<k;j++){
				i--;
				if(i==l2)
					break;
			}
			i++;
			if(temp==l2-1){
				ans+=b[temp];
			}
			else{
				ans+=b[temp]*2;
			}
		}
	check=min(ans,check);
	// cout<<ans<<endl;
	ans=0;
	cout<<check<<endl;
}
int main(){
	ll t,i;
	for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
					for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
					for(int i=0;i<10000;i++);
		for(int i=0;i<10000;i++);
			for(int i=0;i<10000;i++);
				for(int i=0;i<10000;i++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}