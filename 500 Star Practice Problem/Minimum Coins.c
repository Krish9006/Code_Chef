#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int x;
	    scanf("%d",&x);
	     if(x>10)
	        printf("%d\n",x%10);
	    else if(x<10)
	        printf("%d\n",x);
	    else
	        printf("0\n");
	}
	    

}


