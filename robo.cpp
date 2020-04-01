#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
		ll n,i;
		cin>>n;
		vector<ll>a(n),b(n);
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			cin>>b[i];
		}
		ll s1=0;
		ll s2 = 0;
		for(i=0;i<n;i++){
			if(a[i]==1 && b[i] == 0)
				s1++;
			else if(a[i]==0 && b[i] == 1)
				s2++;
			else
				continue;
		}
		if(s1!=0)
			cout<<s2/s1 + 1<<endl;
		else
			cout<<-1<<endl;
	return 0;
}