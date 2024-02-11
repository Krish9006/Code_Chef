#include <stdio.h>

int main(void) {
	// your code goes here
	int h,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d",&h);
	if(h<=70)
	{
	    printf("\n0");
	   
	}
	else if((h>3)&&(h<=100))
	{
	   	    printf("\n500");
 
	}
	else
	{
	   printf("\n2000");  
	}
	}
	return 0;

}

