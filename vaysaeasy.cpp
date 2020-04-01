#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t ,j,check, n , p , k , i ,count = 0;
	cin>>t;
	while(t--){
		cin>>n>>p>>k;
		count = 0;
		check = 0;
		vector<long long int>v(n);
		for(i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.begin()+n);
		// for(i=0;i<n;i++){
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;
		if(p<v[0]){
			cout<<0<<endl;
			continue;
		}
		for(i=0;i<n-1;i++){
			p = p - v[i];
			count++;
			if(p<v[i+1]){
				check = 1;
				p = p + v[i];
				count--;
				break;
			}
		}
		if(check == 0)
			cout<<count+1<<endl;
		else{
			// cout<<i<<endl;
			for(j=i;j<n-1;j++){
				if(p<v[j+1])
					break;
			}
			// cout<<j<<endl;
			if(j>i)
				count = count + 2;
			else
				count++;
			cout<<count<<endl;
		}
	}
	return 0;
}