#include <stdio.h>

int main(void) {
	// your code goes here
int t,x,y,Z;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	        scanf("%d%d",&x,&y);
	        Z=(x+y+1)%4;
	        if(Z==1||Z==2){
	                printf("\nALICE");
	        }
	        else{
	                printf("\nBOB");
	        }
}
}

