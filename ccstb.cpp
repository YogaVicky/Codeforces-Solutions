#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)

void solve(){
	ll n,i,j,k,m,x,y;
	ll check=0,check1=0;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll size=log2(m)+1;
      vector<ll> freq(size,0);

      for(int i=0;i<n;i++)
      {
          int index=0;
          while(a[i]!=0)
          {
              if(a[i]%2==1)
              freq[index]++;
              a[i]/=2;
              index++;
          }
          
      }
      ll ans=0;
      ll mn = 0;
      for(int i=0;i<size;i++)
      {
        if(freq[i] & 1) freq[i]--; 
        mn=max(mn, freq[i]); 
      }
      for(int i=0;i<size;i++)
      {
          if(freq[i]>0)
          ans+=pow(2,i);
      }
      cout<<ans<<endl;
}
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}