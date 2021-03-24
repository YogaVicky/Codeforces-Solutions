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
	ll h,m;
	cin>>h>>m;
	string s;
	cin>>s;
	ll d1,d2,d3,d4;
	d1=s[0]-'0';
	d2=s[1]-'0';
	d3=s[3]-'0';
	d4=s[4]-'0';

	ll h1,m1;
	h1=d1*10 + d2;
	m1=d3*10 + d4;

	ll check=0;

	ll h2,m2;

	
		i = h1;
		for(j=m1;j<m;j++){
			d1=i/10;
			d2=i%10;
			d3=j/10;
			d4=j%10;
			// cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<endl;
			if((d1==1||d1==2||d1==5||d1==8||d1==0) && (d2==1||d2==2||d2==5||d2==8||d2==0) && (d3==1||d3==2||d3==5||d3==8||d3==0) && (d4==1||d4==2||d4==5||d4==8||d4==0)){
				// cout<<"IN"<<endl;
				if(d1==2)
					d1=5;
				else if(d1==5)
					d1=2;

				if(d2==2)
					d2=5;
				else if(d2==5)
					d2=2;

				if(d3==2)
					d3=5;
				else if(d3==5)
					d3=2;

				if(d4==2)
					d4=5;
				else if(d4==5)
					d4=2;

				h2 = d4*10 + d3;
				m2 = d2*10 + d1; 

				if(h2<h && m2<m){
					if(i<10)
						cout<<0<<i;
					else
						cout<<i;
					cout<<":";
					
					if(j<10)
						cout<<0<<j;
					else
						cout<<j;
					cout<<endl;
					check=1;
					return;
				}
			}
		}




	for(i=h1+1;i<h;i++){
		for(j=0;j<m;j++){
			d1=i/10;
			d2=i%10;
			d3=j/10;
			d4=j%10;
			// cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<endl;
			if((d1==1||d1==2||d1==5||d1==8||d1==0) && (d2==1||d2==2||d2==5||d2==8||d2==0) && (d3==1||d3==2||d3==5||d3==8||d3==0) && (d4==1||d4==2||d4==5||d4==8||d4==0)){
				// cout<<"IN"<<endl;
				if(d1==2)
					d1=5;
				else if(d1==5)
					d1=2;

				if(d2==2)
					d2=5;
				else if(d2==5)
					d2=2;

				if(d3==2)
					d3=5;
				else if(d3==5)
					d3=2;

				if(d4==2)
					d4=5;
				else if(d4==5)
					d4=2;

				h2 = d4*10 + d3;
				m2 = d2*10 + d1; 

				if(h2<h && m2<m){
					if(i<10)
						cout<<0<<i;
					else
						cout<<i;
					cout<<":";
					
					if(j<10)
						cout<<0<<j;
					else
						cout<<j;
					cout<<endl;
					check=1;
					return;
				}
			}
		}
	}

	if(check==0){
		cout<<"00:00"<<endl;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}