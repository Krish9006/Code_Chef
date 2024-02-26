#include <stdio.h>

int main(void) {
	// your code goes here
int i,t,s,z,x,y,remain;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d %d",&s,&x,&y,&z);
	    remain = s-(x+y);
	    if(remain>=z)
	    printf("0\n");
	    else if(remain<z)
	    {
	        if(remain+x>=z || remain+y>=z)
	        printf("1\n");
	         else 
	        printf("2\n");
	    }
	  }
	        
	return 0;
}

