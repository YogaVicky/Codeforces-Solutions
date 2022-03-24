#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

void solve(){
	ll n,i,j,k,m;
	cin>>n;
	vector<ll>a(n);
	ll m1=INT_MAX,m2=INT_MIN;
	ll i1,i2;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>m2){
			i1=i;
		}
		if(a[i]<m1){
			i2=i;
		}
	}
	if(i1>i2){
		cout<<min(min(i2+1 + n-i1 , i2+1 + i1-i2),n-i1 + i1-i2)<<endl;
	}
	else{
		cout<<min(min(i1+1 + n-i2 , i1+1 + i2-i1),n-i2 + i2-i1)<<endl;
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



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;

        for(i=0;int(nums.size())-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
            	int low = i+1;
                int high = nums.size()-1;
            	int sum=0-nums[i];
                while(low<high){
                    if(nums[low]+nums[high]==sum) //b+c=a;
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);
                        
                        // to avoid dublicates
                        while(low<high && nums[low]==nums[low+1]) low++;
                        while(low<high && nums[high]==nums[high-1]) high--;
                        
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum) low++;
                    else high--;
                }     
            }
            
        }
        return res;
    }
    
};



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> res;
        
        for(int i=0;i<int(nums.size())-2;i++) //i will run till 3rd last element such that 
                                         // 2nd last and last can form the triblet
        {
            
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int low=i+1; int high=nums.size()-1; int sum=0-nums[i]; //sum=-a
                //keeping low at first and high at end 
                while(low<high)
                {
                    if(nums[low]+nums[high]==sum) //b+c=a;
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);
                        
                        // to avoid dublicates
                        while(low<high && nums[low]==nums[low+1]) low++;
                        while(low<high && nums[high]==nums[high-1]) high--;
                        
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum) low++;
                    else high--;
                   
                }
            }
            
        }
        return res;
        
    }
};
