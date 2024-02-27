#include <stdio.h>

int main(void) {
	// your code goes here
int T;
	scanf("%d",&T);
	while(T--)
	{
	    float A,X,B,Y;
	    scanf("%f %f %f %f",&A,&X,&B,&Y);
	    if((A/X)>(B/Y))
	    {
	       printf("Alice\n");
	    }
	    else if((A/X)==(B/Y))
	    {
	        printf("Equal\n");
	    }
	    else
	    {
	        printf("Bob\n");
	    }
	}
	return 0;
}

