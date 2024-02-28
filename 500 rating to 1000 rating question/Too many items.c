#include <stdio.h>

int main(void) {
	// your code goes here
	// your code goes here
	int t,x;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	        scanf("%d",&x);
	        if(x%10!=0)
	    printf("%d\n",x/10+1);
	    else
	    printf("%d\n",x/10);
	
}
}
