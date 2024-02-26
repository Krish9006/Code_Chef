#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y,d;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	        scanf("%d%d%d",&x,&y,&d);
	        if(abs(x-y)<=d){
	                printf("\nYeS");
	        }
	        else{
	                printf("\nnO");
	        }
	}

}

