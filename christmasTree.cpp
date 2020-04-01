#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n,m,i;
	cin>>n>>m;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll check = 0,count=0;
	for(i=1;i<n;i++)
		check+=a[i]-a[i-1]-1;
	if(check>=m){
		deque b;
		for(auto it=a.begin();(it+1)!=a.end();it++){
			ll v = *it;
			b.push_back(v);
			count++;
			while(v+1!=*(it+1)){
				v++;
				b.push_back(v);
				count++;
			}
		}
		if(m>count){
			while(m!=count){
				b.push_back(b.back()+1);
				if(m==count)break;
				b.push_front(b.front()+1);
			}
		}
		for(auto it = b.begin();it!=b.end();it++)
			cout<<*it<<" ";
	}
	return 0;
}