#include <stdio.h>

int main(void) {
	// your code goes here
int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x+3<=10)
	    {
	        printf(" yes \n");
	    }
	    else
	    {
	        printf(" no \n");
	    }
	}
	return 0;
}

