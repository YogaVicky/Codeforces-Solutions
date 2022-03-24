#include<bits/stdc++.h>
using namespace std;
vector<vector<char>>ans;
void recur(vector<char>& nums,vector<char>v,int i){
        if(i>nums.size())
            return;
        else{
            ans.push_back(v);
            for(;i<nums.size();i++){
                v.push_back(nums[i]);
                recur(nums,v,i+1);
                v.pop_back();
            }
        }
    }

int main(){
	int i;
	string s;
	cin>>s;
	vector<char>nums;
	for(i=0;i<s.length();i++){
		nums.push_back(s[i]);
	}	
	int j,k;
	vector<char>v;
    recur(nums,v,0);
    for(i=0;i<ans.size();i++){
    	vector<char>v=ans[i];
    	cout<<'[';
    	k=v.size();
    	for(j=0;j<k;j++){
    		cout<<v[j];
    		if(j!=k-1)
    			cout<<',';
    	}
    	if(i!=ans.size()-1)
    		cout<<"],";
    	else
    		cout<<']';
    }
	return 0;
}
