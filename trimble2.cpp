array 
1,3,4,5,6,2,8

a = [4,1,2,20]




dp[0,1]=0
dp[1,2]=2
dp[2,3]=3
dp[0,2]=
dp[1,3]=
dp[]

lcs(int a){
	In the dp table when arriving out at the subproblem results make sure there is no
	adjacent elements.

}


//brute
global sum=INT_MIN;

void back(int a,int psum,int ind){
	if(i>=a.size()-1){
		sum=max(sum,psum);
		return;
	}

	for(i=ind+2;i<a.size();i++){
		back(a,psum+a[i],i);
	}
}

int main(){
	psum=0;
	for(i=0;i<n;i++){
		back(a,psum+a[i],i);
	}
}

{2,1,3,10,5}  

back(a,2,0);
back(a,5,2);
back(a,10,4);


back(a,12,3);

back(a,7,4);

sum=12;


back(a,1,2);
back(a,3,2);
back(a,10,3);
back(a,5,4);





int dp[n][n];


  0 1 2 3
0   4
1	  
2
3
