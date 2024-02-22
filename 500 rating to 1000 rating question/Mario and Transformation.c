#include <stdio.h>

int main(void) {
	// your code goes here
int sur;
	int a;
	scanf("%d",&sur);
	
	for(int i=0;i<sur;i++)
	{
	    scanf("%d",&a);
	    
	    if(a%3==0)
	    {
	        printf("normal \n");
	    }
	    else if(a%3==1)
	    {
	        printf("huge \n");
	    }
	    else
	    {
	        printf("small \n");
	    }
	    
	}
	return 0;
}

