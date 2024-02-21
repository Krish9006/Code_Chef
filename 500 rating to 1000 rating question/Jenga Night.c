#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int n,x;
	    scanf("%d %d",&n,&x);
	    
	    if(n==x||x%n==0)
	        printf("yes\n");
	   else
	    printf("no\n");
	}
	return 0;
}

