#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		int i , j , check = 0;
		cin>>s;
		for(i=0;s[i+1]!='\0';i++)
			if(s[i]==s[i+1] && s[i]!='?')
				check = 1;
		if(check == 1)
			cout<<-1<<endl;
		else{
			if(s[0]=='?'){
				for(j=1;s[j]=='?'&&s[j]!='\0';j++);
				// cout<<j<<endl;
				if(s[j]=='a'){
					s[0] = 'b';
				}
				else if(s[j]=='b')
					s[0] = 'c';
				else
					s[0] = 'a';
			}	
			for(i=0;s[i]!='\0';i++){
				if(s[i+1]=='?'){
					for(j=i+2;s[j]=='?'&&s[j]!='\0';j++);
					// cout<<j<<endl;
					if(s[i]=='a'){
						// cout<<"yes"<<endl;
						if(s[j]=='b')
							s[i+1] = 'c';
						else
							s[i+1] = 'b';
					}
					else if(s[i]=='b'){
						if(s[j]=='c')
							s[i+1] = 'a';
						else
							s[i+1] = 'c';
					}
					else{
						if(s[j]=='b')
							s[i+1] = 'a';
						else
							s[i+1] = 'b';
					}
				}
			}
			cout<<s<<endl;
		}
	}
	return 0;
}