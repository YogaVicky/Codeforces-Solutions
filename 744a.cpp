#include <iostream>
using namespace std;
// Driver code
int main() 
{ 	
	int n,i;
	n=7;
	int a[n] = {4,2,4,5,2,3,1,4};
  	int *count = new int[sizeof(int)*(n - 2)];  
    for(i=0;i<n;i++){ 
        if(count[a[i]] == 1) 
            cout<<a[i]<<" "; 
        else
            count[a[i]]++; 
    }  
    cout<<"\n";
    return 0; 
} 

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