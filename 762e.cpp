#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k;
	cin>>n;
	vector<ll>a(n);
	ll t=0;
	map<ll,ll>m;
	ll l = 2*100001;
	for(i=0;i<n;i++){
		m[i]=0;
		m1[i]=0;
	}
	for(i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	vector<ll>ans(n+1);
	ll cost=0;
	ll check=0;
	stack<ll>s;
	ll temp;
	for(i=0;i<n+1;i++){
		if(i==0){
			if(m[i]!=0){
				temp=m[i]-1;
				while(temp--){
					s.push(i);
				}
				cout<<m[i]<<" ";
			}
			else{
				cout<<0<<" ";
				check=1;
				i++;
				break;
				
			}
		}
		else if(m[i]==0){
			cout<<cost<<" ";
			if(s.empty()){
				check=1;
				i++;
				break;
			}
			if(!s.empty()){
				temp=s.top();
				s.pop();
				cost+=(i-temp);
			}
		}
		else{
			temp=m[i]-1;
			while(temp--){
				s.push(i);
			}
			cout<<m[i]+cost<<" ";
		}
	}
	for(;i<n+1;i++)
		cout<<-1<<" ";
	cout<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}