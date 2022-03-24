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
	vector<ll>a(n);
	set<ll>s;
	for(i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
			cout<<"NO"<<endl;
			return;
		}
	}
	ll check=0;
	while(check==0 && s.size()<=300){
		check=1;
		for(auto it = s.begin();it!=s.end();it++){
			for(auto it1 = std::next(it);it1!=s.end();it1++){
				if(s.find(abs(*it-*it1))==s.end()){
					// cout<<abs(*it-*it1)<<endl;
					check=0;
					s.insert(abs(*it-*it1));
				}
			}
		}
	}
	if(check==1){
		cout<<"YES"<<endl;
		cout<<s.size()<<endl;
		for(auto it = s.begin();it!=s.end();it++){
			cout<<*it<<" ";
		}
	}
	else{
		cout<<"NO";
	}
	cout<<endl;

}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
