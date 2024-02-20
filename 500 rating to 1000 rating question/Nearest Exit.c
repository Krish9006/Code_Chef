#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int x;
	    scanf("%d",&x);
	    if(x>=1&&x<=50){
	        printf("left\n");
	    }
	    else if(x>50&&x<=100) {
	        printf("right\n");
	    }
	}
	return 0;
}

