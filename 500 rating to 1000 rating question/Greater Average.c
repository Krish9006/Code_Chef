#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d%d%d",&a,&b,&c);
	    if( c*2 < a + b){
    	    printf("YES\n");
    	}else{
    	    printf("NO\n");
    	}
	}
	return 0;
	}



