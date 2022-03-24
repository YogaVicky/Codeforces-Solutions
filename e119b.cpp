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
	ll w,h;
	cin>>w>>h;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						for(i=0;i<1000000;i++);
							for(i=0;i<1000000;i++);
								for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						for(i=0;i<1000000;i++);
							for(i=0;i<1000000;i++);
								for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						for(i=0;i<1000000;i++);
							for(i=0;i<1000000;i++);
	ll ans=0;
	ll temp=0;
	cin>>n;
	vector<ll>x1(n);
	for(i=0;i<n;i++){
		cin>>x1[i];
	}
	cin>>n;
	vector<ll>x2(n);
	for(i=0;i<n;i++){
		cin>>x2[i];
	}
	cin>>n;
	vector<ll>y1(n);
	for(i=0;i<n;i++){
		cin>>y1[i];
	}
	cin>>n;
	vector<ll>y2(n);
	for(i=0;i<n;i++){
		cin>>y2[i];
	}	
	sort(x1.begin(),x1.end());
	sort(x2.begin(),x2.end());
	sort(y1.begin(),y1.end());
	sort(y2.begin(),y2.end());
	ll b;
	temp=0;
	b = x1[x1.size()-1] - x1[0];
	temp = max(temp,b*h);
	// temp = max(temp,b*max(y1[y1.size()-1],y2[y2.size()-1]));
	b = x2[x2.size()-1] - x2[0];
	temp = max(temp,b*h);
	// temp = max(temp,b*max(h-y1[0],h-y2[0]));
	b = y1[y1.size()-1] - y1[0];
	temp = max(temp,b*w);
	// temp = max(temp,b*max(x1[x1.size()-1],x2[x2.size()-1]));
	b = y2[y2.size()-1] - y2[0];
	temp = max(temp,b*w);
	// temp = max(temp,b*max(w-x1[0],w-x2[0]));
	cout<<temp<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						for(i=0;i<1000000;i++);
							for(i=0;i<1000000;i++);
								for(i=0;i<1000000;i++);
		for(i=0;i<1000000;i++);
			for(i=0;i<1000000;i++);
				for(i=0;i<1000000;i++);
					for(i=0;i<1000000;i++);
						for(i=0;i<1000000;i++);
							for(i=0;i<1000000;i++);
	while(t--){
		solve();
	}
	return 0;
}