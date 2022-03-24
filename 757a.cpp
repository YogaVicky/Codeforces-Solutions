#include<bits/stdc++.h>
using namespace std;
int main(){	
	int input1;
	cin>>input1;
    int a=1,b=2,c=3,d;
    int mod=1000000007; 
    if(input1==1) cout<<a<<endl;
    else if(input1==2) cout<<b<<endl;
    else if(input1==3) cout<<c<<endl;
    else{
    	input1-=3;
    	while(input1--){
    		d=a+b+c;
    		d%=mod;
    		a=b;
    		b=c;
    		c=d;
    	}
    	cout<<d<<endl;
    }
    return 0;
}
