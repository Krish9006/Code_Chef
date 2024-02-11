#include <stdio.h>

int main(void) {
     	int T;
	scanf("%d",&T);
	int N,X,Y;
	for(int i=0;i<T;i++){
    	scanf("%d%d%d",&N,&X,&Y);
    	if(N<=(X*Y)){
    	    printf("YES\n");
    	}
    	else{
    	    printf("NO\n");
    	}
    	
    	
	}
   
    return 0;
    }

