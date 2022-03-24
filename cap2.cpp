#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin>>n;
    int sum=0,d;
    int num,rev=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    num=sum;
    while(num){
        d = num % 10;
        rev = (rev * 10) + d;
        num = num / 10;
    }
    if(sum==rev)
        cout<<1<<endl;
    else
        cout<<0<<endl;
	return 0;
}
