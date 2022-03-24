#include<stdio.h>
int main(){
	if(fork()){
		if(!fork()){
			printf("1\n");
		}
		else{
			printf("2\n");
		}
	}
	else{
		printf("3\n");
	}
	printf("4\n");
	return 0;
}