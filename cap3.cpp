#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPalindrome(string s)
{
    int len = s.length();
    for (int i=0; i<len/2; i++)
    {
        if (s[i] != s[len-i-1])
            return false;
    }
    return true;
}

void partition(vector<vector<string> > &v, string &s,vector<string> &temp, int index)
{
    int len = s.length();
    string str;
    vector<string> current = temp;
    if (index == 0)
        temp.clear();
    for (int i = index; i < len; ++i)
    {
        str = str + s[i];
        if (isPalindrome(str))
        {
            temp.push_back(str);
            if (i+1 < len)
                partition(v,s,temp,i+1);
            else
                v.push_back(temp);
            temp = current;
        }
    }
}
int main(){
    ll t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        if(isPalindrome(s))
        {
            for(int i=0;i<n/2;i++)
            {
                cout<<s[i];
            }
            if(n%2!=0)
            cout<<s[n/2];
            cout<<endl;
        }
        else{
            vector<vector<string> > v;
            vector<string> temp;
            partition(v, s, temp, 0);
            for (int i = 0; i < v.size(); ++i)
            {
                for(int j = 0; j < v[i].size(); ++j)
                    cout << v[i][j] << " ";
                cout << endl;
            }
        }
 
    }
}