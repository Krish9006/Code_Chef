#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d",&x);
	    if(x<4){
	        printf("\nMILD");
	    }
	    else if(x>=4&&x<7){
	    printf("\nMEDIUM");
	    }
	    else if(x>=7){
	        printf("\nHOT");
	    }
	}

}

