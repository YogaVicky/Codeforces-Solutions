#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n,k,check2,check1,check3,count=0,i,j,m,l;
	cin>>n>>k;
	vector<string>s(n),a;
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(m=j+1;m<n;m++){
				check3 = 1;
				for(l=0;l<k;l++){
					if((s[i][l]==s[j][l] && s[i][l]!=s[m][l]) || (s[i][l]!=s[j][l] && s[j][l]==s[m][l])||(s[i][l]!=s[j][l] && s[i][l]==s[m][l])){
						check3=0;
						break;
					}
				}
				if(check3)
					count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}