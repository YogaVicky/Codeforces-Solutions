#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	ll t,a,b,sum,x;
	cin>>t;
	ll i;
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
	while(t--){
		cin>>a>>b;
        sum=a;
        if((a-1)%4==0)
        x=a-1;
        else if((a-1)%4==1)
        x=1;
        else if((a-1)%4==2)
        x=a;
        else
        x=0;
        

        
        ll y=b^x;
        if(y==0)
        cout<<sum<<endl;
        else
        {
            if(y!=a)
            {
                cout<<sum+1<<endl;
            }
            else
            {
                cout<<sum+2<<endl;
            }
        }
        

    }
	return 0;
}