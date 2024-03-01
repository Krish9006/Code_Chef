#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a1,a2,a3,b1,b2,b3;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	        scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
	         int max1=fmax(fmax(a1+a2,a2+a3),a1+a3);
	    int max2=fmax(fmax(b1+b2,b2+b3),b1+b3);
	    if(max1>max2)
	    {
	        printf("Alice\n");
	    }
	    else if(max1<max2)
	    {
	        printf("Bob\n");
	    }
	    else
	    {
	        printf("Tie\n");
	    }
	}
}

