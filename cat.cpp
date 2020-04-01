#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c,d,x,y,x1,y1,x2,y2;
		cin>>a>>b>>c>>d;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		ll xa = b-a+x;
		ll ya = d-c+y;
		if(xa>=x1 && xa<=x2 && ya>=y1 && ya<=y2){
			if((a>0&&x-x1==0 && b>0&&x2-x==0 )|| (c>0&&y-y1==0 && d>0&&y2-y==0))
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
}