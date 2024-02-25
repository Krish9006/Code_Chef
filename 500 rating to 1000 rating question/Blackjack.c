#include <stdio.h>

int main(void) {
	// your code goes here
	int T,A,B;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d",&A,&B);
	    int C=21-(A+B);
	    if(C>=1 && C<=10)
	    {
	        printf("%d\n",C);
	        
	    }
	    else
	    {
	        printf("-1\n");
	    }
	    
	}
	return 0;
}

