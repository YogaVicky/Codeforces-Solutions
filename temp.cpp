#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int temp=0;
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            temp=0;
            unordered_map<float,int>mp;
            for(int j=i+1;j<n;j++)
            {
                float k=((a[j]-a[i])*1.0)/(i-j);
                mp[k]++;
                temp=max(temp,mp[k]);
            }
            ans=max(ans,temp);
        }
        cout<<n-ans-1<<"\n";
        
 
    }
    return 0;
}